#!/usr/bin/env python
# -*- coding: utf-8 -*-

from __future__ import print_function, unicode_literals, with_statement
import json
import re
import sys
import requests

api = requests.get('https://raw.githubusercontent.com/Facepunch/Facepunch.Steamworks/master/Generator/steam_sdk/steam_api.json').json()
api_ext = requests.get('https://raw.githubusercontent.com/Facepunch/Facepunch.Steamworks/master/Generator/steam_api_missing.json').json()

class Typedef(object):
    def __init__(self, **kwargs):
        super(Typedef, self).__init__()
        self.name = kwargs['typedef']
        self.type = kwargs['type']

        self.parent = Struct.get('::'.join(self.name.split('::')[:-1]))
        self.name = self.name.split('::')[-1]
        self.parent.typedefs += [self]

    def __str__(self):
        return re.sub(r'^([^(]*)(\((?:T::)?\*)(\))(\(.*\))(.*);$',
                      r'\1 \2\5\3 \4;',
                      re.sub(r'^([^\[]*)(\[.*\])([^\[]*);$',
                             r'\1 \3 \2;',
                             'typedef {type} {name};'.format(**self.__dict__)))

class EnumValue(object):
    def __init__(self, **kwargs):
        super(EnumValue, self).__init__()
        self.name = kwargs['name']
        self.value = kwargs['value']

    def __str__(self):
        return '{name} = {value},'.format(**self.__dict__)


class Enum(object):
    def __init__(self, **kwargs):
        super(Enum, self).__init__()
        self.name = kwargs['enumname']
        self.values = [EnumValue(**v) for v in kwargs['values']]

        self.parent = Struct.get('::'.join(self.name.split('::')[:-1]))
        self.name = self.name.split('::')[-1]
        self.parent.enums += [self]

    def __str__(self):
        values = '\n  '.join([str(v) for v in self.values])
        return 'enum {name} {{\n  {values}\n}};' \
               .format(name=self.name, values=values)


class Const(object):
    def __init__(self, **kwargs):
        super(Const, self).__init__()
        self.name = kwargs['constname']
        self.type = ('const ' + kwargs['consttype']).replace('const const', 'const')
        self.value = kwargs['constval']

        self.parent = Struct.get('::'.join(self.name.split('::')[:-1]))
        self.name = self.name.split('::')[-1]
        self.parent.consts += [self]

    def __str__(self):
        return '{type} {name} = {value};'.format(**self.__dict__)


class Field(object):
    def __init__(self, **kwargs):
        super(Field, self).__init__()
        self.name = kwargs['fieldname']
        self.type = kwargs['fieldtype'].split('::')[-1]

    def __str__(self):
        return re.sub(r'^([^(]*)(\((?:T::)?\*)(\))(\(.*\))(.*);$',
                      r'\1 \2\5\3 \4;',
                      re.sub(r'^([^\[]*)(\[.*\])([^\[]*);$', r'\1 \3 \2;',
                             '{type} {name};'.format(**self.__dict__)))


class Struct(object):
    __all__ = {}

    @staticmethod
    def get(name):
        if name in Struct.__all__:
            return Struct.__all__[name]
        else:
            return Struct.__all__.get(name, Struct(struct=name, fields=[]))

    @staticmethod
    def set(name, struct):
        Struct.__all__[name] = struct

    def __init__(self, **kwargs):
        super(Struct, self).__init__()
        self.name = kwargs['struct']
        self.fields = [Field(**v) for v in kwargs.get('fields', [])]

        self.structs = []
        self.typedefs = []
        self.methods = []
        self.consts = []
        self.enums = []

        Struct.__all__[self.name] = self

        if '::' in self.name:
            self.parent = Struct.get('::'.join(self.name.split('::')[:-1]))
            self.name = self.name.split('::')[-1]
            self.parent.structs += [self]
        elif self.name != '':
            self.parent = Struct.get('')
            self.parent.structs += [self]

    def __str__(self):
        children = \
            [l for v in self.typedefs for l in str(v).split('\n')] + \
            [l for v in self.consts for l in str(v).split('\n')] + \
            [l for v in self.enums for l in str(v).split('\n')] + \
            [l for v in self.structs for l in str(v).split('\n')] + \
            [l for v in self.fields for l in str(v).split('\n')] + \
            [l for v in self.methods for l in str(v).split('\n')]
        if self.name == '' or self.name == 'SteamApi':
            return '\n'.join(children)
        return 'struct {name} {{\n  {children}\n}};' \
               .format(name=self.name, children='\n  '.join(children))


class Param(object):
    def __init__(self, **kwargs):
        super(Param, self).__init__()
        self.name = kwargs['paramname']
        self.type = kwargs['paramtype']

    def __str__(self):
        return '{type} {name}'.format(**self.__dict__)


class Method(object):
    def __init__(self, **kwargs):
        super(Method, self).__init__()
        name = kwargs['classname']
        self.name = kwargs['methodname']
        self.type = kwargs['returntype']
        self.params = [Param(**v) for v in kwargs.get('params', [])]
        self.is_virtual = kwargs.get('NeedsSelfPointer', True)

        if self.type == 'class CSteamID':
            self.type = 'uint64'
        assert 'class' not in self.type or '*' in self.type

        self.parent = Struct.get(name)
        self.parent.methods += [self]

    def __str__(self):
        params = ', '.join([str(p) for p in self.params])
        if self.is_virtual:
            return 'virtual {type} {name}({params});' \
                   .format(type=self.type, name=self.name, params=params)
        else:
            return 'extern "C" {type} {name}({params});' \
                   .format(type=self.type, name=self.name, params=params)


Struct.set('', Struct(struct='', fields=[]))

for v in api['structs'] + api_ext.get('structs', []):
    if v['struct'] in ['CGameID::GameID_t', 'CSteamID::SteamID_t::SteamIDComponent_t']:
        continue
    Struct.set(v['struct'], Struct(**v))

for v in api['typedefs'] + api_ext.get('typedefs', []):
    Typedef(**v)

for v in api['enums'] + api_ext.get('enums', []):
    Enum(**v)

for v in api['consts'] + api_ext.get('consts', []):
    Const(**v)

for v in api['methods'] + api_ext.get('methods', []):
    Method(**v)

Struct.get('').structs = [s for s in Struct.get('').structs
                          if s.name not in ['CSteamAPIContext', 'CCallResult',
                                            'CCallbackBase', 'CCallback']]

with open('include/steam_api.hpp', 'w') as out:
    print('#ifndef INCLUDED_STEAM_API_HPP', file=out)
    print('#define INCLUDED_STEAM_API_HPP', file=out)
    print('', file=out)
    print(str(Struct.get(''))
            .replace('_Bool', 'bool')
            .replace('(anonymous)', '')
            .replace('__attribute__((cdecl))', '')
            .replace('struct SteamID_t', 'union SteamID_t')
            .replace('18446744073709551615', '18446744073709551615ull'),
          file=out)
    print('', file=out)
    print('#endif // INCLUDED_STEAM_API_HPP', file=out)

with open('steam_api/steam_api.spec', 'w') as out:
    methods = Struct.get('SteamApi').methods
    for i, v in enumerate(methods):
        print('@ cdecl {name}() _{name}'.format(**v.__dict__), file=out)

    for i, v in enumerate([v for v in Struct.get('').structs if v.name[0:6] == 'ISteam']):
        print('@ cdecl {name}() _{name}'.format(name=v.name[1:]), file=out)

    print('@ cdecl SteamInternal_ContextInit() _SteamInternal_ContextInit', file=out)
    print('@ cdecl SteamAPI_SetMiniDumpComment() _SteamAPI_SetMiniDumpComment', file=out)
    print('@ cdecl SteamAPI_WriteMiniDump() _SteamAPI_WriteMiniDump', file=out)

with open('steam_api/steam_api.ipp', 'w') as out:
    methods = Struct.get('SteamApi').methods
    for v in methods:
        callstr = '{{ return {name}({params}); }}'.format(name=v.name, params=', '.join(p.name for p in v.params))
        print(str(v).replace(v.name, '_' + v.name).replace(';', callstr), file=out)

    for v in [v for v in Struct.get('').structs if v.name[0:6] == 'ISteam']:
        print('extern "C" auto _{name}() {{ return SteamAPI_Context()->{name}(); }}'.format(name=v.name[1:]), file=out)

    print('extern "C" auto _SteamInternal_ContextInit() { return SteamInternal_ContextInit(); }', file=out)

with open('csteamworks/csteamworks.ipp', 'w') as out:
    # methods = Struct.get('SteamApi').methods
    # for v in methods:
    #     callstr = '{{ return {name}({params}); }}'.format(name=v.name, params=', '.join(p.name for p in v.params))
    #     print(str(v).replace(v.name, '_' + v.name).replace(';', callstr), file=out)

    printed = {}
    for v in [v for v in Struct.get('').structs if v.name[0:6] == 'ISteam']:
        for m in v.methods:
            kwargs = {'params': ', '.join([str(p) for p in m.params]),
                    'pnames': ', '.join([p.name for p in m.params]),
                    'name': v.name[1:],
                    'method': m.name}
            kwargs['function'] = '_I{name}_{method}'.format(**kwargs)
            if kwargs['function'] in printed:
                kwargs['function'] += '_'
            printed[kwargs['function']] = True

            if v.name == 'ISteamInventory' and m.name == 'SetProperty':
                continue

            print('extern "C" auto {function}({params}) {{ debug("{function}({params})"); return {name}()->{method}({pnames}); }}'.format(**kwargs), file=out)

TOPDIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
BINDIR ?= build
TARGET ?= x86_64-linux-gnu

### Common settings

i386-linux-gnu_CXXFLAGS = -mno-cygwin -m32 -O3 -fno-omit-frame-pointer -fno-PIE -fno-PIC
i386-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I$(TOPDIR)/src -I$(TOPDIR)/include
i386-linux-gnu_LDFLAGS  = -mno-cygwin -m32 -L/opt/wine-staging/lib/ -nodefaultlibs /opt/wine-staging/lib/wine/libwinecrt0.a -luser32 -lkernel32 -lgdi32 -Wl,-rpath=\$$ORIGIN

x86_64-linux-gnu_CXXFLAGS = -mno-cygwin -O3 -fno-omit-frame-pointer
x86_64-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I$(TOPDIR)/src -I$(TOPDIR)/include
x86_64-linux-gnu_LDFLAGS  = -mno-cygwin -Wl,-rpath=\$$ORIGIN

### Tools

CXX = /opt/wine-staging/bin/wineg++
RC = /opt/wine-staging/bin/wrc
AR = ar

CFLAGS   = $($(TARGET)_CFLAGS)
CXXFLAGS = $($(TARGET)_CXXFLAGS)
CPPFLAGS = $($(TARGET)_CPPFLAGS)
LDFLAGS  = $($(TARGET)_LDFLAGS)

### Generic targets

i386-linux-gnu_MODULE   = steam_api.dll
x86_64-linux-gnu_MODULE = steam_api64.dll

steam_api_dll_MODULE   = $($(TARGET)_MODULE)
steam_api_dll_CXX_SRCS = $(TOPDIR)/steam_api/steam_api.cpp
steam_api_dll_LDFLAGS  = -shared steam_api.spec -L$(BINDIR)/lib/$(TARGET)
steam_api_dll_DLLS     = odbc32 ole32 oleaut32 winspool odbccp32 uuid steam_api

DLLS = $(steam_api_dll_MODULE)

all: $(DLLS:%=$(BINDIR)/lib/$(TARGET)/%.so)

$(BINDIR)/lib/$(TARGET):
	mkdir -p "$(BINDIR)/lib/$(TARGET)"

$(BINDIR)/lib/$(TARGET)/$(steam_api_dll_MODULE).so: $(steam_api_dll_CXX_SRCS) steam_api.spec $(BINDIR)/lib/$(TARGET)
	$(CXX) $(LDFLAGS) $(steam_api_dll_LDFLAGS) -o $@ $(steam_api_dll_CXX_SRCS) $(CPPFLAGS) $(CXXFLAGS) $(steam_api_dll_DLLS:%=-l%)

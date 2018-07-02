TOPDIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
BINDIR ?= build
TARGET ?= x86_64-linux-gnu

### Common settings

i386-linux-gnu_CXXFLAGS = -mno-cygwin -m32 -O3 -fno-omit-frame-pointer -fno-PIE -fno-PIC
i386-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I../src
i386-linux-gnu_LDFLAGS  = -mno-cygwin -m32 -L/opt/wine-staging/lib/ -nodefaultlibs /opt/wine-staging/lib/wine/libwinecrt0.a -luser32 -lkernel32 -lgdi32 -Wl,-rpath=\$$ORIGIN

x86_64-linux-gnu_CXXFLAGS = -mno-cygwin -O3 -fno-omit-frame-pointer
x86_64-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I../src
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

i386-linux-gnu_MODULE   = csteamworks.dll
x86_64-linux-gnu_MODULE = csteamworks.dll

csteamworks_dll_MODULE   = $($(TARGET)_MODULE)
csteamworks_dll_CXX_SRCS = csteamworks.cpp $(TOPDIR)/src/steakworms.cpp
csteamworks_dll_LDFLAGS  = -shared csteamworks.spec -L$(BINDIR)/lib/$(TARGET)
csteamworks_dll_DLLS     = odbc32 ole32 oleaut32 winspool odbccp32 uuid steam_api

DLLS = $(csteamworks_dll_MODULE)

all: $(DLLS:%=$(BINDIR)/lib/$(TARGET)/%.so)

$(BINDIR)/lib/$(TARGET):
	mkdir -p "$(BINDIR)/lib/$(TARGET)"

$(BINDIR)/lib/$(TARGET)/$(csteamworks_dll_MODULE).so: $(csteamworks_dll_CXX_SRCS) csteamworks.spec $(BINDIR)/lib/$(TARGET)
	$(CXX) $(LDFLAGS) $(csteamworks_dll_LDFLAGS) -o $@ $(csteamworks_dll_CXX_SRCS) $(CPPFLAGS) $(CXXFLAGS) $(csteamworks_dll_DLLS:%=-l%)

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

i386-linux-gnu_MODULE   = steamclient.dll
x86_64-linux-gnu_MODULE = steamclient64.dll

steamclient_dll_MODULE   = $($(TARGET)_MODULE)
steamclient_dll_CXX_SRCS = $(TOPDIR)/steamclient/steamclient.cpp \
                           $(TOPDIR)/steamclient/isteam_unimplemented.cpp \
                           $(TOPDIR)/steamclient/isteam_client.cpp \
                           $(TOPDIR)/steamclient/isteam_user.cpp \
                           $(TOPDIR)/steamclient/isteam_utils.cpp
steamclient_dll_LDFLAGS  = -shared steamclient.spec -L$(BINDIR)/lib/$(TARGET)
steamclient_dll_DLLS     = odbc32 ole32 oleaut32 winspool odbccp32 uuid steam_api

DLLS = $(steamclient_dll_MODULE)

all: $(DLLS:%=$(BINDIR)/lib/$(TARGET)/%.so)

$(BINDIR)/lib/$(TARGET):
	mkdir -p "$(BINDIR)/lib/$(TARGET)"

$(BINDIR)/lib/$(TARGET)/$(steamclient_dll_MODULE).so: $(steamclient_dll_CXX_SRCS) steamclient.spec $(BINDIR)/lib/$(TARGET)
	$(CXX) $(LDFLAGS) $(steamclient_dll_LDFLAGS) -o $@ $(steamclient_dll_CXX_SRCS) $(CPPFLAGS) $(CXXFLAGS) $(steamclient_dll_DLLS:%=-l%)

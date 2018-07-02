BINDIR ?= build
TARGET ?= x86_64-linux-gnu
DLLS    = steam_api.dll

all: $(DLLS:%=$(BINDIR)/lib/$(TARGET)/%.so)

### Common settings

i386-linux-gnu_CXXFLAGS = -mno-cygwin -m32 -O0 -ggdb
i386-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I../include
i386-linux-gnu_LDFLAGS  = -mno-cygwin -m32 -L/opt/wine-staging/lib/ -nodefaultlibs /opt/wine-staging/lib/wine/libwinecrt0.a -luser32 -lkernel32 -lgdi32 -Wl,-rpath=\$$ORIGIN

x86_64-linux-gnu_CXXFLAGS = -mno-cygwin -O0 -ggdb
x86_64-linux-gnu_CPPFLAGS = -I/opt/wine-staging/include/ -I/opt/wine-staging/include/wine/windows/ -I../include
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

steam_api_dll_MODULE   = steam_api.dll
steam_api_dll_CXX_SRCS = steam_api.cpp
steam_api_dll_LDFLAGS  = -shared $(steam_api_dll_MODULE:.dll=.spec) -L$(BINDIR)/lib/$(TARGET)
steam_api_dll_DLLS     = odbc32 ole32 oleaut32 winspool odbccp32 uuid steam_api

$(BINDIR)/lib/$(TARGET):
	mkdir -p "$(BINDIR)/lib/$(TARGET)"

$(BINDIR)/lib/$(TARGET)/$(steam_api_dll_MODULE).so: $(steam_api_dll_CXX_SRCS) $(steam_api_dll_MODULE:.dll=.spec) $(BINDIR)/lib/$(TARGET)
	$(CXX) $(LDFLAGS) $(steam_api_dll_LDFLAGS) -o $@ $(steam_api_dll_CXX_SRCS) $(CPPFLAGS) $(CXXFLAGS) $(steam_api_dll_DLLS:%=-l%)

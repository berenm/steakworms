#include "steakworms.hpp"

extern "C" {
#include "steamclient.ipp"
}

[[gnu::constructor]] void __init() { debug("init steamclient.dll"); }
[[gnu::destructor]] void  __fini() { debug("fini steamclient.dll"); }

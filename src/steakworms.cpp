#define _GLIBCXX_USE_C99_DYNAMIC 1

#include <cstdint>
#include <cstdio>

#include <unistd.h>

#include "steakworms.hpp"

#ifndef _WIN32
int __dbg = dup(2);
#endif

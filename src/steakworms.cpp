#define _GLIBCXX_USE_C99_DYNAMIC 1

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <ctime>

#include <algorithm>
#include <unordered_map>
#include <vector>

#include <unistd.h>

#include "steakworms.hpp"

#ifndef _WIN32
int __dbg = dup(2);
#endif

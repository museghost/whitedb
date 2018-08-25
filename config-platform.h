#ifndef DEFINED_CONFIG_PLATFORM_H
#define DEFINED_CONFIG_PLATFORM_H

#if defined(_WIN32)
#if defined(__MINGW32__) || defined(__MINGW64__)
#include "../config.h"
#else
#include "../config-w32.h"
#endif
#else
#include "../config.h"
#endif

#endif

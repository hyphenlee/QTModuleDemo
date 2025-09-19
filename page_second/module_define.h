#pragma once

#if defined MODULE_LIBRARY
#  define MODULE_EXPORT __declspec(dllexport)
#else
#  define MODULE_EXPORT __declspec(dllimport)
#endif

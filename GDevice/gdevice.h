#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/*
#if defined(_MSC_VER)
#pragma comment( lib, "gdevice.lib" )
#elif
#error unhandled compiler!
#endif


#ifdef __cpluscplus
extern "C" {
#endif
	__declspec(dllexport) int gdCreateWindow();
#ifdef __cpluscplus
}
#endif
*/

extern "C" {
	__declspec(dllexport) int gdCreateWindow();
}
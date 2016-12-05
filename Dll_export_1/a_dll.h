#pragma once

#ifdef YL_FIRST_DLL
#define YL_FIRST_DLL

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef YL_FIRST
#define YL_FIRST_API __declspec(dllexport)
#else
#define YL_FIRST_API __declspec(dllimport)
#endif

YL_FIRST_API int first_test_dll_fuction(int a, int b);

#undef YL_FIRST_API

#ifdef __cplusplus
}
#endif

#endif
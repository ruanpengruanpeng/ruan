#define C_DLL_API _declspec(dllexport)
#include"C.h"

C_DLL_API int mul(int a, int b)
{
	return a * b;
}


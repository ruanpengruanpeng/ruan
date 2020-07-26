#define B_DLL_API _declspec(dllexport)
#include"B.h"


B_DLL_API int jian(int a, int b)
{
	return a - b;
}

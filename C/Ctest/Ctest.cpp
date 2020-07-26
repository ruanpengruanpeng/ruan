#include "pch.h"
#include "CppUnitTest.h"
#include "C.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Ctest
{
	TEST_CLASS(Ctest)
	{
	public:

		TEST_METHOD(Testmul)
		{
			Assert::AreEqual(12, mul(4, 3));
		}
		
	};
}

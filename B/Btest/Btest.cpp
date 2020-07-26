#include "pch.h"
#include "CppUnitTest.h"
#include "B.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Btest
{
	TEST_CLASS(Btest)
	{
	public:

		
		TEST_METHOD(Testjian)
		{
			Assert::AreEqual(1, jian(1, 0));
		}
	};
}

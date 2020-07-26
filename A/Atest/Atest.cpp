#include "pch.h"
#include "CppUnitTest.h"
#include "A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Atest
{
	TEST_CLASS(Atest)
	{
	public:
		
		TEST_METHOD(Testsum)
		{
			Assert::AreEqual(1, sum(1, 0));
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include"../D/D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Dtest
{
	TEST_CLASS(Dtest)
	{
	public:
		
		TEST_METHOD(Testchu)
		{
			Assert::AreEqual(4, chu(12, 3));
		}
	};
}

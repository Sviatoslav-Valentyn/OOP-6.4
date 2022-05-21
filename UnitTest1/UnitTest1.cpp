#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			size_t arr[]{ 1, 1, 1, 1 };
			Assert::AreEqual(false, CheckUniqueElem(arr, 4));

		}
	};
}

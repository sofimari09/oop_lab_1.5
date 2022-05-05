#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.h"
#include "../Pair.cpp"
#define TESTING

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			c.SetA(2);
			int test = c.GetA();
			Assert::AreEqual(test, 2);

		}
	};
}

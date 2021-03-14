#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.6/Time.h"
#include "../lab 1.6/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time::Triad t1{};
			t1.Init(1, 2, 2);
			int test = t1.check();
			Assert::AreEqual(1, test);
		}
	};
}

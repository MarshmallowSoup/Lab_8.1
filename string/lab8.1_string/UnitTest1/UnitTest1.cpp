#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1_string/lab8.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "ASS";
			int k = count(s);
			Assert::AreEqual(3,k);
		}
	};
}

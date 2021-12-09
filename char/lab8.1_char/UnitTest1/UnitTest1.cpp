#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include "CppUnitTest.h"
#include "../lab8.1_char/lab8.1_char.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[4] = "ASS";
			char cs[2] = "S";
			int k = Count(s, cs);
			Assert::AreEqual(2, k);

		}
	};
}

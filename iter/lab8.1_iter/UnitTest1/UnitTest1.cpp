#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include "CppUnitTest.h"
#include "../lab8.1_iter/lab8.1_iter.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char string[6] = "BASIC";
			char* dest = new char[151];
			dest = change(string);
			Assert::AreEqual("Delphi", dest);

		}
	};
}

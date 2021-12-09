#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1_rec/lab8.1_rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char string[6] = "BASIC";
			char* dest = new char[151];
			dest = Change(string, dest, 0,0);
			Assert::AreEqual("Delphi", dest);
		}
	};
}

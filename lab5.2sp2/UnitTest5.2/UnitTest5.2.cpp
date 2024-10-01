#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2sp2/lab5.2sp2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(3, 1 , 5);
			Assert::AreEqual(t, -7.5);
		}
	};
}

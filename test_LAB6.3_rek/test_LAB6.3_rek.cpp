#include "pch.h"
#include "CppUnitTest.h".
#include "../LAB6.3_rek/LAB6.3_rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testLAB63rek
{
	TEST_CLASS(testLAB63rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 2, 5, 1, 9, 2 };
			int t = arr_sum(a, 5);
			Assert::AreEqual(t, 19);
		}
	};
}

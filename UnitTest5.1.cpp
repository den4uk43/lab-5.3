#include "pch.h"
#include "CppUnitTest.h"
#include "E:/ap_labs/PR5.1/PR5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(1.0, 0.0);
			Assert::AreEqual(t, 0.5);
		}
	};
}

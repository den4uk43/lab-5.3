#include "pch.h"
#include "CppUnitTest.h"
#include "E:/ap_labs/PR5.3/PR5.3/lab5.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = z(0.0);
			Assert::AreEqual(t, 0.0, 0.0001);
		}
	};
}

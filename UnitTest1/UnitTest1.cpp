#include "../lab 1.1/lab 1.1/FloatRange.h"
#include "../lab 1.1/lab1.1/FloatRange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FloatRange a, b, c, d;
			a.Init(1, 2);
			b.Init(1, 10);
			c.Init(-100, -5);
			d.Init(5, 600);
			Assert::IsTrue(a.rangeCheck(1.5));
			Assert::IsTrue(b.rangeCheck(5));
			Assert::IsFalse(c.rangeCheck(6));
			Assert::IsFalse(d.rangeCheck(4));
		}
	};
}


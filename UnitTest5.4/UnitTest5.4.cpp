#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.4/lab05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestP0)
		{

			double k = 402361344. / 1719339934195203125,
				l = P0(2);

			Assert::AreEqual(k, l, 0.000001);
		}
	};
}

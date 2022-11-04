#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3lab/5.3lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My53unit
{
	TEST_CLASS(My53unit)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k;
			k = h(1);
			Assert::AreEqual(k, 1,4);
		}
	};
}

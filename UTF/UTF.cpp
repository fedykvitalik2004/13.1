#include "pch.h"
#include "CppUnitTest.h"
#include "../doddd.h"
#include "../summm.h"
#include "../varrr.h"
#include "../summm.cpp"
#include "../doddd.cpp"
#include "../varrr.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTF
{
	TEST_CLASS(UTF)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			n = 2;
			a = 1, x = 1;
			double test = 0.6;
			nsDodd::dodd();

			Assert::AreEqual(test, a);
		}
	};
}

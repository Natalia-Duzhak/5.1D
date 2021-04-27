#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1D/Money.cpp"
#include "../Project5.1D/MyException.cpp"
#include "../Project5.1D/Triad.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a(0,0,0,0,0,0,0,0,0,0,0);
			bool k = a.getk500();
			Assert::AreEqual(k, false);
		}
	};
}

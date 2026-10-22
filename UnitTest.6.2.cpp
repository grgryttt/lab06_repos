#include "pch.h"
#include "CppUnitTest.h"
#include "../PR.6.2/MyMath.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
    TEST_CLASS(UnitTest62)
    {
    public:

        TEST_METHOD(TestAverageOdd_Positive)
        {
            int a[5] = { 1, 2, 3, 4, -6 };           // непарні: 1 і 3 -> середнє 2
            double avg = 0;
            Assert::IsTrue(AverageOdd(a, 5, avg));
            Assert::AreEqual(2.0, avg, 1e-9);
        }

        TEST_METHOD(TestAverageOdd_NoOdd)
        {
            int a[4] = { 2, 4, 6, 8 };               // непарних немає
            double avg = 0;
            Assert::IsFalse(AverageOdd(a, 4, avg));
        }

        TEST_METHOD(TestAverageOdd_Negative)
        {
            int a[3] = { -3, -5, 4 };                // від'ємні непарні -> -4
            double avg = 0;
            Assert::IsTrue(AverageOdd(a, 3, avg));
            Assert::AreEqual(-4.0, avg, 1e-9);
        }
    };
}

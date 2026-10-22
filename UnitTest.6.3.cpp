#include "pch.h"
#include "CppUnitTest.h"
#include "../PR.6.3/MyMath.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
    TEST_CLASS(UnitTest63)
    {
    public:

        TEST_METHOD(TestSumInt)
        {
            int a[5] = { 5, -3, 0, 7, -1 };
            Assert::AreEqual(12, Sum(a, 5, 0));
        }

        TEST_METHOD(TestSumTemplateInt)
        {
            int a[5] = { 5, -3, 0, 7, -1 };
            Assert::AreEqual(12, Sum<int>(a, 5, 0));
        }

        TEST_METHOD(TestSumTemplateDouble)
        {
            double b[4] = { 1.5, -2.5, 0.0, 3.25 };
            Assert::AreEqual(4.75, Sum<double>(b, 4, 0), 1e-9);
        }

        TEST_METHOD(TestSumNoPositive)
        {
            int z[3] = { -1, -2, 0 };                // додатних немає
            Assert::AreEqual(0, Sum(z, 3, 0));
        }
    };
}

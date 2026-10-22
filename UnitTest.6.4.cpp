#include "pch.h"
#include "CppUnitTest.h"
#include "../PR.6.4/MyMath.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
    TEST_CLASS(UnitTest64)
    {
    public:

        TEST_METHOD(TestMinAbs)
        {
            int a[7] = { 5, -2, 0, 4, -3, 2, 8 };
            Assert::AreEqual(0, MinAbs(a, 7, 0));
            int b[3] = { 3, -3, 5 };                 // при рівних модулях – перший
            Assert::AreEqual(3, MinAbs(b, 3, 0));
        }

        TEST_METHOD(TestFindFirstZero)
        {
            int a[7] = { 5, -2, 0, 4, -3, 0, 8 };
            Assert::AreEqual(2, FindFirstZero(a, 7, 0));
            int c[3] = { 1, 2, 3 };
            Assert::AreEqual(-1, FindFirstZero(c, 3, 0));
        }

        TEST_METHOD(TestSumAbs)
        {
            int a[7] = { 5, -2, 0, 4, -3, 2, 8 };
            Assert::AreEqual(4 + 3 + 2 + 8, SumAbs(a, 7, 3));
        }

        TEST_METHOD(TestRearrangeEven)
        {
            int d[6] = { 1, 2, 3, 4, 5, 6 };
            Rearrange(d, 6);                         // 2 4 6 | 1 3 5
            int e[6] = { 2, 4, 6, 1, 3, 5 };
            for (int i = 0; i < 6; i++)
                Assert::AreEqual(e[i], d[i]);
        }

        TEST_METHOD(TestRearrangeOdd)
        {
            int f[5] = { 1, 2, 3, 4, 5 };
            Rearrange(f, 5);                         // 2 4 | 1 3 5
            int g[5] = { 2, 4, 1, 3, 5 };
            for (int i = 0; i < 5; i++)
                Assert::AreEqual(g[i], f[i]);
        }
    };
}

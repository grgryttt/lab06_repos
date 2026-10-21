#include "pch.h"
#include "CppUnitTest.h"
#include "../PR.6.1/MyMath.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
    TEST_CLASS(UnitTest61)
    {
    public:

        // ---------- ітераційний спосіб ----------
        TEST_METHOD(TestCountIter)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };       // за критерієм: 4 і 10
            Assert::AreEqual(2, CountIter(a, 6));
        }

        TEST_METHOD(TestSumIter)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };
            Assert::AreEqual(14, SumIter(a, 6));
        }

        TEST_METHOD(TestZeroIter)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };
            ZeroIter(a, 6);
            int e[6] = { 0, -2, 3, 0, 0, 7 };
            for (int i = 0; i < 6; i++)
                Assert::AreEqual(e[i], a[i]);
        }

        // ---------- рекурсивний спосіб ----------
        TEST_METHOD(TestCountRec)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };
            Assert::AreEqual(2, CountRec(a, 6, 0));
        }

        TEST_METHOD(TestSumRec)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };
            Assert::AreEqual(14, SumRec(a, 6, 0));
        }

        TEST_METHOD(TestZeroRec)
        {
            int a[6] = { 4, -2, 3, 10, 0, 7 };
            ZeroRec(a, 6, 0);
            int e[6] = { 0, -2, 3, 0, 0, 7 };
            for (int i = 0; i < 6; i++)
                Assert::AreEqual(e[i], a[i]);
        }

        // ---------- порівняння обох способів на одному масиві ----------
        TEST_METHOD(TestIterEqualsRec)
        {
            const int n = 25;
            int a[n], b[n];
            srand(12345);
            CreateIter(a, n, -20, 30);
            srand(12345);
            CreateRec(b, n, -20, 30, 0);
            for (int i = 0; i < n; i++)
                Assert::AreEqual(a[i], b[i]);        // однакові масиви
            Assert::AreEqual(CountIter(a, n), CountRec(b, n, 0));
            Assert::AreEqual(SumIter(a, n), SumRec(b, n, 0));
        }
    };
}
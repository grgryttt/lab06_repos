#include "MyMath.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool IsOdd(const int x)
{
    return x % 2 != 0;                       // працює і для від'ємних: -3 % 2 == -1
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
    if (i < size)
    {
        a[i] = Low + rand() % (High - Low + 1);
        Create(a, size, Low, High, i + 1);
    }
}

void Print(const int* a, const int size, int i)
{
    if (i < size)
    {
        cout << setw(4) << a[i];
        Print(a, size, i + 1);
    }
    else
        cout << endl;
}

int SumOdd(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;
    return (IsOdd(a[i]) ? a[i] : 0) + SumOdd(a, size, i + 1);
}

int CountOdd(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;
    return (IsOdd(a[i]) ? 1 : 0) + CountOdd(a, size, i + 1);
}

bool AverageOdd(const int* a, const int size, double& avg)
{
    int k = CountOdd(a, size, 0);
    if (k == 0)
        return false;                        // ділити на нуль не можна
    avg = (double)SumOdd(a, size, 0) / k;
    return true;
}

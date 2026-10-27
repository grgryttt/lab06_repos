#include "MyMath.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool IsOdd(const int x)
{
    return x % 2 != 0;                       // працює і для від'ємних: -3 % 2 == -1
}

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int SumOdd(const int* a, const int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
        if (IsOdd(a[i]))
            s += a[i];
    return s;
}

int CountOdd(const int* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (IsOdd(a[i]))
            k++;
    return k;
}

bool AverageOdd(const int* a, const int size, double& avg)
{
    int k = CountOdd(a, size);
    if (k == 0)
        return false;                        // ділити на нуль не можна
    avg = (double)SumOdd(a, size) / k;
    return true;
}

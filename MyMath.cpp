#include "MyMath.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int Abs(const int x)
{
    return x < 0 ? -x : x;
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

int MinAbs(const int* a, const int size, int i)
{
    if (i == size - 1)
        return a[i];                         // база: останній елемент
    int m = MinAbs(a, size, i + 1);          // мінімум серед елементів правіше
    return Abs(a[i]) <= Abs(m) ? a[i] : m;   // <= : при рівності беремо лівий (перший)
}

int FindFirstZero(const int* a, const int size, int i)
{
    if (i >= size)
        return -1;                           // нуля немає
    if (a[i] == 0)
        return i;
    return FindFirstZero(a, size, i + 1);
}

int SumAbs(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;
    return Abs(a[i]) + SumAbs(a, size, i + 1);
}

void CopyStep2(const int* a, const int size, int i, int* b, int& j)
{
    if (i < size)
    {
        b[j++] = a[i];
        CopyStep2(a, size, i + 2, b, j);     // крок 2
    }
}

void CopyBack(const int* b, int* a, const int size, int i)
{
    if (i < size)
    {
        a[i] = b[i];
        CopyBack(b, a, size, i + 1);
    }
}

void Rearrange(int* a, const int size)
{
    int* b = new int[size];                  // допоміжний масив
    int j = 0;
    CopyStep2(a, size, 1, b, j);             // спочатку парні позиції (індекси 1,3,5...)
    CopyStep2(a, size, 0, b, j);             // потім непарні позиції (індекси 0,2,4...)
    CopyBack(b, a, size, 0);
    delete[] b;
}

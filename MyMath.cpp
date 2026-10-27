#include "MyMath.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int Abs(const int x)
{
    return x < 0 ? -x : x;
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

int MinAbs(const int* a, const int size)
{
    int m = a[0];                            // припускаємо, що перший – мінімальний
    for (int i = 1; i < size; i++)
        if (Abs(a[i]) < Abs(m))              // строге <, тому при рівності лишається перший
            m = a[i];
    return m;
}

int FindFirstZero(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
        if (a[i] == 0)
            return i;
    return -1;                               // нуля немає
}

int SumAbs(const int* a, const int size, const int from)
{
    int s = 0;
    for (int i = from; i < size; i++)
        s += Abs(a[i]);
    return s;
}

void CopyStep2(const int* a, const int size, const int start, int* b, int& j)
{
    for (int i = start; i < size; i += 2)    // крок 2
        b[j++] = a[i];
}

void CopyBack(const int* b, int* a, const int size)
{
    for (int i = 0; i < size; i++)
        a[i] = b[i];
}

void Rearrange(int* a, const int size)
{
    int* b = new int[size];                  // допоміжний масив
    int j = 0;
    CopyStep2(a, size, 1, b, j);             // спочатку парні позиції (індекси 1,3,5...)
    CopyStep2(a, size, 0, b, j);             // потім непарні позиції (індекси 0,2,4...)
    CopyBack(b, a, size);
    delete[] b;
}

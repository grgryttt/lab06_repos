#include "MyMath.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// ================= спільна функція =================
bool Criterion(const int x)
{
    return x > 0 && x % 2 == 0;
}

// ================= Спосіб 1: ітераційний =================
void CreateIter(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void PrintIter(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int CountIter(const int* a, const int size)
{
    int k = 0;                               // лічильник
    for (int i = 0; i < size; i++)
        if (Criterion(a[i]))
            k++;
    return k;
}

int SumIter(const int* a, const int size)
{
    int s = 0;                               // накопичувач суми
    for (int i = 0; i < size; i++)
        if (Criterion(a[i]))
            s += a[i];
    return s;
}

void ZeroIter(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        if (Criterion(a[i]))
            a[i] = 0;
}

// ================= Спосіб 2: рекурсивний =================
void CreateRec(int* a, const int size, const int Low, const int High, int i)
{
    if (i < size)
    {
        a[i] = Low + rand() % (High - Low + 1);
        CreateRec(a, size, Low, High, i + 1);    // рекурсивний виклик для наступного індексу
    }
}

void PrintRec(const int* a, const int size, int i)
{
    if (i < size)
    {
        cout << setw(4) << a[i];
        PrintRec(a, size, i + 1);
    }
    else
        cout << endl;                            // кінець рядка після останнього елемента
}

int CountRec(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;                                // база рекурсії
    if (Criterion(a[i]))
        return 1 + CountRec(a, size, i + 1);
    return CountRec(a, size, i + 1);
}

int SumRec(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;
    if (Criterion(a[i]))
        return a[i] + SumRec(a, size, i + 1);
    return SumRec(a, size, i + 1);
}

void ZeroRec(int* a, const int size, int i)
{
    if (i < size)
    {
        if (Criterion(a[i]))
            a[i] = 0;
        ZeroRec(a, size, i + 1);
    }
}

// Лабораторна робота № 6.3 (варіант 30). Рекурсивний спосіб.
// Сума додатних елементів масиву: звичайна функція та шаблон.
#include <iostream>
#include "MyMath.h"
using namespace std;

int main()
{
    const int n = 8;

    int a[n] = { 5, -3, 0, 7, -1, 2, -8, 4 };
    cout << "Sum(a, n, 0)      = " << Sum(a, n, 0) << endl;           // звичайна функція
    cout << "Sum<int>(a, n, 0) = " << Sum<int>(a, n, 0) << endl;      // шаблон, int

    double b[n] = { 1.5, -2.5, 0.0, 3.25, -1.0, 2.0, -7.5, 4.75 };
    cout << "Sum<double>(b, n, 0) = " << Sum<double>(b, n, 0) << endl;

    long long c[n] = { 100000000000LL, -5, 3, 0, 1, -1, 2, 4 };
    cout << "Sum<long long>(c, n, 0) = " << Sum<long long>(c, n, 0) << endl;

    return 0;
}

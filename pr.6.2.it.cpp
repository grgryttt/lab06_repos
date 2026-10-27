// Лабораторна робота № 6.2 (варіант 30). Ітераційний спосіб.
// Середнє арифметичне непарних елементів масиву a із n цілих елементів.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "MyMath.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    srand((unsigned)time(NULL));

    const int n = 15;
    const int Low = -20;
    const int High = 30;
    int a[n];

    Create(a, n, Low, High);
    cout << "Масив:" << endl;
    Print(a, n);

    double avg;
    if (AverageOdd(a, n, avg))
        cout << "Середнє арифметичне непарних: " << fixed << setprecision(2) << avg << endl;
    else
        cout << "Непарних елементів немає" << endl;

    return 0;
}

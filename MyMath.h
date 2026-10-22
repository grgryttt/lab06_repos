#pragma once
// Завдання 6.2 (варіант 30). Середнє арифметичне непарних елементів масиву.

bool IsOdd(const int x);                                                    // чи непарне число
void Create(int* a, const int size, const int Low, const int High, int i);  // заповнює масив випадковими числами
void Print(const int* a, const int size, int i);                            // виводить масив у рядок
int  SumOdd(const int* a, const int size, int i);                           // сума непарних елементів
int  CountOdd(const int* a, const int size, int i);                         // кількість непарних елементів
bool AverageOdd(const int* a, const int size, double& avg);                 // середнє непарних; false, якщо їх немає

#pragma once
// Завдання 6.1 (варіант 30). Ітераційний та рекурсивний способи в одному проєкті.
// Критерій: всі додатні парні елементи.

// ---------- спільна функція ----------
bool Criterion(const int x);                                               // чи задовольняє елемент критерію

// ---------- Спосіб 1: ітераційні функції ----------
void CreateIter(int* a, const int size, const int Low, const int High);    // заповнює масив випадковими числами
void PrintIter(const int* a, const int size);                              // виводить масив у рядок
int  CountIter(const int* a, const int size);                              // кількість елементів за критерієм
int  SumIter(const int* a, const int size);                                // сума елементів за критерієм
void ZeroIter(int* a, const int size);                                     // заміна елементів за критерієм нулями

// ---------- Спосіб 2: рекурсивні функції (i – поточний індекс) ----------
void CreateRec(int* a, const int size, const int Low, const int High, int i);
void PrintRec(const int* a, const int size, int i);
int  CountRec(const int* a, const int size, int i);
int  SumRec(const int* a, const int size, int i);
void ZeroRec(int* a, const int size, int i);

#pragma once
// Завдання 6.4 (варіант 30). Ітераційний спосіб. Динамічний масив цілих чисел.

int  Abs(const int x);                                                // модуль числа
void Create(int* a, const int size, const int Low, const int High);   // заповнення випадковими числами
void Print(const int* a, const int size);                             // виведення масиву в рядок
int  MinAbs(const int* a, const int size);                            // мінімальний за модулем елемент
int  FindFirstZero(const int* a, const int size);                     // індекс першого нуля або -1
int  SumAbs(const int* a, const int size, const int from);            // сума модулів від індексу from до кінця
void CopyStep2(const int* a, const int size, const int start, int* b, int& j); // копіює кожен 2-й елемент a (з start) у b
void CopyBack(const int* b, int* a, const int size);                  // копіює b назад в a
void Rearrange(int* a, const int size);                               // парні позиції – у першу половину, непарні – у другу
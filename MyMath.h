#pragma once
// Завдання 6.3 (варіант 30). Ітераційний спосіб.
// Сума додатних елементів масиву чисел.

// звичайна функція
int Sum(const int* a, const int size);

// шаблон функції; визначення шаблонів має бути в заголовку
template <typename T>
T Sum(const T* a, const int size)
{
    T s = T();                               // нульове значення типу T
    for (int i = 0; i < size; i++)
        if (a[i] > T())
            s += a[i];
    return s;
}


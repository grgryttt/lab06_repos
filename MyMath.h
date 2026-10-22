#pragma once
// Завдання 6.3 (варіант 30). Сума додатних елементів масиву чисел.

// звичайна функція
int Sum(const int* a, const int size, int i);

// шаблон функції; визначення шаблонів має бути в заголовку
template <typename T>
T Sum(const T* a, const int size, int i)
{
    if (i >= size)
        return T();                          // нульове значення типу T (база рекурсії)
    if (a[i] > T())
        return a[i] + Sum<T>(a, size, i + 1);
    return Sum<T>(a, size, i + 1);
}
#pragma once

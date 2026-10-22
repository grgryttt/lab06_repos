#include "MyMath.h"

int Sum(const int* a, const int size, int i)
{
    if (i >= size)
        return 0;                            // база рекурсії
    if (a[i] > 0)
        return a[i] + Sum(a, size, i + 1);
    return Sum(a, size, i + 1);
}

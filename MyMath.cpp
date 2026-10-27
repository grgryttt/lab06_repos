#include "MyMath.h"

int Sum(const int* a, const int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
        if (a[i] > 0)
            s += a[i];
    return s;
}

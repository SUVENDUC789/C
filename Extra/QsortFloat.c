#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    const float *pa = a;
    const float *pb = b;
    return *pb - *pa;
    // return *pa - *pb;
}
int main()
{
    float a[] = {9.9, 8.8, 7.7, 5.5, 6.6, 4.4, 3.3, 2.2, 1.1};
    int size = sizeof(a) / sizeof(float);

    qsort(a, size, sizeof(float), comp);

    for (int i = 0; i < size; i++)
    {
        printf("%f\n", a[i]);
    }

    return 0;
}
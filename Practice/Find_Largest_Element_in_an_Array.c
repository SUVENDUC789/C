#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    const int *pa = a;
    const int *pb = b;
    return *pb - *pa;
}

int main()
{
    int a[] = {9, 6, 7, 4, 2, 88};
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), comp);
    printf("\nMaximum element : %d", a[0]);
    return 0;
}
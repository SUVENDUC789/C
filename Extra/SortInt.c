#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    const int *pa = a;
    const int *pb = b;
    return *pa - *pb;
}
void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }
}
int main()
{
    int a[] = {108,1,5,216};
    int size = sizeof(a) / sizeof(int);
    qsort(a, size, sizeof(int), comp);
    printArray(a, size);
}
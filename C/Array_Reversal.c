#include <stdio.h>
void reversalArray(int *a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void printArray(int *a, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf("]\n");
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);
    reversalArray(a, n);
    printArray(a, n);
    return 0;
}
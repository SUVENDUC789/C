#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("\nEnter number : ");
    scanf("%d", &n);
    int *a = (int *)calloc(8, sizeof(int));
    int k = 0;
    while (n)
    {
        a[k++] = n % 2;
        n = n / 2;
    }
    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}
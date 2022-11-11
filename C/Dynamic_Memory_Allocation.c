#include <stdio.h>
#include <stdlib.h>
void printArrays(int *a, int n)
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
    // malloc
    int *a = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer number [%d] :", i + 1);
        scanf("%d", &a[i]);
    }
    printArrays(a, 10);
    free(a);
    double *b = (double *)calloc(10, sizeof(double));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter double number [%d] :", i + 1);
        scanf("%lf", &b[i]);
    }
    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf("%lf,", b[i]);
    }
    printf("}\n");
    free(b);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
void printArray(int *p, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", p[i]);
    }
    printf("]\n");
}
int main()
{
    int *p = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number [%d] :", i + 1);
        scanf("%d", &p[i]);
    }
    printArray(p, 10);

    p = (int *)realloc(p, 3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter number [%d] :", i + 1);
        scanf("%d", &p[i]);
    }
    printArray(p, 3);

    free(p);

    return 0;
}
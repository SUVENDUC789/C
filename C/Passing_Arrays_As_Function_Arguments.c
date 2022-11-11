#include <stdio.h>
void printArrays(int a[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf("]\n");
}
void printArrayWithPointer(int *a, int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", *(a + i));
    }
    printf("}\n");
}
void printMat(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[] = {9, 6, 7, 4, 2, 8, 9, 2, 2, 0};
    int n = sizeof(a) / sizeof(int);
    printArrays(a, n);
    printArrayWithPointer(a, n);

    int mat[3][3] = {
        {51, 52, 53},
        {11, 21, 31},
        {10, 20, 30}};

    printMat(mat);

    return 0;
}
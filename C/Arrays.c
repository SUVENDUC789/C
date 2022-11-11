#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number [%d] :", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    int b[3][3] = {
        {1, 2, 3},
        {10, 20, 30},
        {100, 200, 300}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
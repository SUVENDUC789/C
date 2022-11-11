#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number you want multiplication table of :");
    scanf("%d", &n);
    printf("Table of %d:\n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, (n * i));
    }
    return 0;
}
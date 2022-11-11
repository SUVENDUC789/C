#include <stdio.h>
int main()
{
    int n, revN = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    while (n)
    {
        int re = n % 10;
        n = n / 10;
        revN = (revN * 10) + re;
    }
    printf("\nReverse no. : %d", revN);

    return 0;
}
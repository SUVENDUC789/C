#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("\nEnter number : ");
    scanf("%d", &n);
    printf("\nResult is : %d (Ap approch)", ((n * n + n)) / 2);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\nResult is : %d (itterative approch)", sum);
    return 0;
}
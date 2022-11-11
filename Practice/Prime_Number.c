#include <stdio.h>
int main()
{
    int n, isprime = 1;
    printf("\nEnter number : ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime)
    {
        printf("%d is prime no.", n);
    }
    else
    {
        printf("%d is not prime no.", n);
    }

    return 0;
}
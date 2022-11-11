#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Ami kichu bolbo na");
        goto last;
    }
    if (n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
last:
    return 0;
}
#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    n = 7;
    printf("%d ! = %d", n, factorial(n));
    return 0;
}
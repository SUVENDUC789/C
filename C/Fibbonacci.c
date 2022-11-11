#include <stdio.h>
int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    // 0 1 1 2 3 5 8 13 21
    int n = 10-1;
    printf("%d th term = %d", n, fib(n));
    return 0;
}
#include <stdio.h>
#include <stdarg.h>

int sum(int size, ...)
{
    int sum = 0;
    va_list a;
    va_start(a, size);
    for (int i = 0; i < size; i++)
    {
        sum += va_arg(a, int);
    }
    va_end(a);
    return sum;
}
int main()
{
    printf("Sum is : %d", sum(3, 10, 20, 30));
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 100;
    char ch = 'c';
    printf("%d%5c\n", a, ch);
    printf("%-50d%c\n", a, ch);
    return 0;
}
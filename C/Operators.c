#include <stdio.h>
int main()
{
    int num = 10;
    printf("Result : %s\n", ((num % 2 == 0) ? "Even" : "Odd"));
    
    int a = 34, b = 6, n = 0;
    // Logical
    printf("a && n : %d\n", (a && n));
    printf("a || n : %d\n", (a || n));
    printf("!n : %d\n", (!n));

    // Relation
    printf("a == b : %d\n", (a == b));
    printf("a != b : %d\n", (a != b));
    printf("a >= b : %d\n", (a >= b));
    printf("a <= b : %d\n", (a <= b));
    printf("a > b : %d\n", (a > b));
    printf("a < b : %d\n", (a < b));

    // Arithmetic
    printf("a + b = %d\n", (a + b));
    printf("a - b = %d\n", (a - b));
    printf("a * b = %d\n", (a * b));
    printf("a / b = %d\n", (a / b));
    printf("a %% b = %d\n", (a % b));

    return 0;
}
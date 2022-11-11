#include <stdio.h>
// without argument and without return value
void fun1(void);
// without argument and with return value
void divide(int, float);
int main()
{
    // fun1();
    // divide(10,3);
    return 0;
}
void divide(int a, float b)
{
    printf("%f", (a / b));
}
void fun1(void)
{
    printf("Hello sir !");
}
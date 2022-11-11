#include <stdio.h>
void fun(void)
{
    static int i;
    i++;
    printf("Value i is : %d\n", i);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        fun();
    }
    return 0;
}
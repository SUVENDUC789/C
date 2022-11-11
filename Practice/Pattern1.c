#include <stdio.h>
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    pattern1(5);
    return 0;
}
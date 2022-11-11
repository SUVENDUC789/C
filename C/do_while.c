#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter number : ");
    scanf("%d", &n);
    do
    {
        printf("Do-while loop is : %d\n", i);
        i++;
    } while (i <= n);
}
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("While : %d\n", i);
        i++;
    }
    return 0;
}
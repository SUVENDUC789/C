#include <stdio.h>
#include <math.h>
int main()
{
    int n = 123;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Number of digit : %d", (int)log10(n) + 1);
    return 0;
}
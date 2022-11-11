#include <stdio.h>
int main()
{
    int b[4] = {9, 6, 7, 4};
    int *q = &b[0];
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *q++);
    }

    int a = 34;
    int *p = &a;
    printf("Adress is : %d\n", p);
    printf("Adress is : %d\n", p + 1);
    printf("Adress is : %d\n", p + 1 + 1);
    return 0;
}
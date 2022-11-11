#include <stdio.h>
int main()
{
    int a = 108, *p;
    p = &a;
    printf("Value of a is : %d\n", a);
    printf("Value of *p is : %d\n", *p);
    printf("Address of a is : %d\n", &a);
    printf("Address of p is : %d\n", p);
    printf("Address of &p is : %d\n", &p);

    int *q=NULL;
    printf("Null pointer value is : %d",q);
    return 0;
}
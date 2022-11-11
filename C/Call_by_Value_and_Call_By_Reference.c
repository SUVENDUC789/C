#include <stdio.h>
void swap(int *a, int *b) // formal parameter(call by reference)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void swap2(int a, int b) // formal parameter(call by value)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter two number a & b : ");
    scanf("%d %d", &a, &b);
    // swap(&a, &b); // Actual parameter
    swap2(a, b); // Actual parameter
    printf("\na=%d | b=%d", a, b);
    return 0;
}
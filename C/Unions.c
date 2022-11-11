#include <stdio.h>
typedef union Test
{
    int a;
    float b;
    char c;
} T;
typedef struct Test2
{
    char c;
    int a;
    float b;
} Ts;

int main()
{
    T v;
    Ts v2;
    printf("Size of v : %d bytes\n", sizeof(v));
    printf("Size of v2 : %d bytes\n", sizeof(v2));
    return 0;
}
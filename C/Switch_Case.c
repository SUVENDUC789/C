#include <stdio.h>
int main()
{
    char ch;
    int a, b, c;
    printf("Any one choice : {+,-,*,/} = ");
    scanf("%c", &ch);
    printf("Enter number (a) : ");
    scanf("%d", &a);
    printf("Enter number (b) : ");
    scanf("%d", &b);
    switch (ch)
    {
    case '+':
        c = a + b;
        printf("%d + %d = %d", a, b, c);
        break;
    case '-':
        c = a - b;
        printf("%d - %d = %d", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("%d * %d = %d", a, b, c);
        break;
    case '/':
        printf("%d / %d = %f", a, b, (float)a / (float)b);
        break;

    default:
        printf("Please choice correct operator");
        break;
    }
}
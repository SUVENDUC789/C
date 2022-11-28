#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int size;
    int top;
    char *a;
} Stack;

int isEmpty(Stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}

int isFull(Stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    return 0;
}

void push(Stack *s, char val)
{
    if (!isFull(s))
    {
        s->top++;
        s->a[s->top] = val;
    }
}

char pop(Stack *s)
{
    char val;
    if (!isEmpty(s))
    {
        val = s->a[s->top];
        s->top--;
    }
    return val;
}

int check(char ch1, char ch2)
{
    if (ch1 == '(' && ch2 == ')')
        return 1;
    if (ch1 == '{' && ch2 == '}')
        return 1;
    if (ch1 == '[' && ch2 == ']')
        return 1;
    return 0;
}

int parenthisis(char *str)
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = strlen(str);
    s->top = -1;
    s->a = (char *)calloc(s->size, sizeof(char));

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(s, str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            char ch = pop(s);
            if (!check(ch, str[i]))
            {
                return 0;
            }
        }
    }

    if (isEmpty(s))
    {
        return 1;
    }
    return 0;
}
int main()
{
    char *str = "((})){}[]";
    if (parenthisis(str))
    {
        printf("Exp is balanced...\n");
    }
    else
    {
        printf("Exp is not balanced...\n");
    }

    return 0;
}
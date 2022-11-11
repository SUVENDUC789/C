#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *a;
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

void push(Stack *s, int val)
{
    if (isFull(s))
    {
        printf("\nStack is Full !");
        return;
    }
    else
    {
        s->top++;
        s->a[s->top] = val;
    }
}
void peek(Stack *s, int i)
{
    int index = s->top - i + 1;
    if (index < 0)
    {
        printf("\nNot valid position\n");
    }
    else
    {
        printf("Peek valus is : %d\n", s->a[s->top - i + 1]);
    }
}
void pop(Stack *s)
{
    int val = -1;
    if (isEmpty(s))
    {
        printf("\nStack is Empty !");
        return;
    }
    else
    {
        val = s->a[s->top];
        printf("\nPop element is : %d", val);
        s->top--;
    }
}
// stackTop, stackBottom
void stackBottom(Stack *s)
{
    if (isEmpty(s))
    {
        printf("\nStack is Empty !\n");
        return;
    }
    else
    {
        printf("\nStack Bottom value is : %d\n", s->a[0]);
    }
}
void stackTop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("\nStack is Empty !\n");
        return;
    }
    else
    {
        printf("\nStack top value is : %d\n", s->a[s->top]);
    }
}
void showStack(Stack *s)
{
    printf("\n");
    if (isEmpty(s))
    {
        printf("\nStack is Empty !\n");
        return;
    }
    else
    {
        for (int i = s->top; i >= 0; i--)
        {
            printf("|%d|\n", s->a[i]);
        }
    }
    printf("\n");
}

int main()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = 10;
    s->top = -1;
    s->a = (int *)calloc(s->size, sizeof(int));

    push(s, 10);
    push(s, 10 + 10);
    push(s, 10 + 20);
    push(s, 10 + 30);

    pop(s);
    peek(s, 1);
    stackTop(s);
    stackBottom(s);
    showStack(s);

    return 0;
}
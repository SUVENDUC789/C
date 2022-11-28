/*
Implementing Stack using Linklist
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node *next;
} Node;

int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(void)
{
    Node *n = (Node *)malloc(sizeof(Node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

Node *push(Node *top, char val)
{
    if (!isFull())
    {
        Node *n = (Node *)malloc(sizeof(Node));
        n->data = val;
        n->next = top;
        top = n;
    }
    return top;
}

Node *pop(Node *top)
{
    if (!isEmpty(top))
    {
        Node *n = top;
        top = top->next;
        free(n);
    }
    return top;
}

int ParenthesisMatching(char *Exp)
{
    Node *head = NULL;
    int n = strlen(Exp);

    for (int i = 0; i < n; i++)
    {
        if (Exp[i] == '(')
        {
            head = push(head, Exp[i]);
        }
        else if (Exp[i] == ')')
        {
            if (isEmpty(head))
            {
                return 0;
            }
            head = pop(head);
        }
    }
    if (isEmpty(head))
    {
        return 1;
    }

    return 0;
}
int main()
{
    char *Exp = "()a(+b()";
    // char *Exp = "7-(8(3*9)+11+12))-8)";
    if (ParenthesisMatching(Exp))
    {
        printf("It is Balenced Exp...\n");
    }
    else
    {
        printf("It is Not Balenced Exp...\n");
    }

    return 0;
}

/*

( --> if yes pushed the stack
)  --> if yes pop out the stack

Condition for a balanced Exp

1)While poping Stack shuld not underflow => if it happens ->Unbalanced
2)At EOE ,the stack must be empty => if it happens -> unbalanced Expression

Exp = 7-(8(3*9)+11+12))-8)
*/

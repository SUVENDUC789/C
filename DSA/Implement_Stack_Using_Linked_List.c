#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
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

Node *push(Node *top, int val)
{
    if (isFull())
    {
        printf("Stack is full !\n");
    }
    else
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
    if (isEmpty(top))
    {
        printf("Stack is Empty !\n");
    }
    else
    {
        Node *n = top;
        printf("Deleted element : %d\n", top->data);
        top = top->next;
        free(n);
    }
    return top;
}

void Stack(Node *head)
{
    printf("\nStack view :>\n");
    while (head != NULL)
    {
        printf("| [%d] |\n", head->data);
        head = head->next;
    }
    printf("========\n");
}

void Traverse(Node *head)
{
    if (isEmpty(head))
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("\nLinklist Traversal :>\n");
        Node *p = head;
        while (head->next != NULL)
        {
            printf("[%d]->", head->data);
            head = head->next;
        }
        printf("[%d]->NULL\n", head->data);
        Stack(p);
    }
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *last = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->next = n1;

    n1->data = 20;
    n1->next = n2;

    n2->data = 30;
    n2->next = last;

    last->data = 40;
    last->next = NULL;

    Traverse(head);
    head = push(head, 108);
    head = push(head, 216);
    Traverse(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    head = pop(head);
    Traverse(head);

    return 0;
}
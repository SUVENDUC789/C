#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;

} Node;

void Traversal(Node *head)
{
    Node *p = head;
    printf("NULL->");
    while (p != NULL)
    {
        printf("|%d|->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void Revarsal(Node *head)
{
    Node *p = head;
    printf("NULL->");
    while (p != NULL)
    {
        printf("|%d|->", p->data);
        p = p->prev;
    }
    printf("NULL\n");
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *last = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->prev = NULL;
    head->next = n1;

    n1->data = 20;
    n1->prev = head;
    n1->next = n2;

    n2->data = 30;
    n2->prev = n1;
    n2->next = last;

    last->data = 40;
    last->prev = n2;
    last->next = NULL;

    Traversal(head);
    Revarsal(last);

    return 0;
}
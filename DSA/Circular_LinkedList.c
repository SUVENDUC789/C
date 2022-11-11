#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void TraversalCircularLinklist(Node *head)
{
    Node *p = head;
    do
    {
        printf("|%d|->", p->data);
        p = p->next;
    } while (p != head);
    printf("(head-node)\n");
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->next = n1;

    n1->data = 20;
    n1->next = n2;

    n2->data = 30;
    n2->next = n3;

    n3->data = 40;
    n3->next = head;

    TraversalCircularLinklist(head);

    return 0;
}
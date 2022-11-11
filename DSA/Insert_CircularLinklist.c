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
Node *InsertAtHead(Node *head, int newData)
{
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = newData;

    Node *q = head;
    do
    {
        q = q->next;
    } while (q->next != head);
    q->next = p;
    p->next = head;
    head = p;

    return head;
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
    head = InsertAtHead(head, 108);
    TraversalCircularLinklist(head);

    return 0;
}
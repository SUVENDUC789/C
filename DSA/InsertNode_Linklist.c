#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void Traversal(Node *p)
{
    while (p != NULL)
    {
        printf("|%d|->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

Node *InsertNodeAtHead(Node *head, int newdata)
{
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = newdata;

    p->next = head;
    head = p;

    return head;
    // return p;
}
Node *InsertNodeAtBetween(Node *head, int newData, int index)
{
    if (index == 0)
    {
        head = InsertNodeAtHead(head, newData);
        return head;
    }
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = newData;

    Node *p = head;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

Node *InsertAtLast(Node *head, int newData)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = newData;
    ptr->next = NULL;

    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    return head;
}

Node *InsertNodeAtGivenNode(Node *head, Node *givenNode, int newData)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = newData;

    ptr->next = givenNode->next;
    givenNode->next = ptr;
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

    n2->data = 30; // 2
    n2->next = n3;

    n3->data = 40;
    n3->next = NULL;

    Traversal(head);

    // insert at head
    head = InsertNodeAtHead(head, 1080);

    // insert in between
    int index = 3;
    head = InsertNodeAtBetween(head, 1080, index);

    // insert at last
    head = InsertAtLast(head, 1080);
    head = InsertAtLast(head, 216);
    head = InsertAtLast(head, 324);
    head = InsertAtLast(head, 540);

    // insert at given node
    head = InsertNodeAtGivenNode(head, n2, 2022);

    Traversal(head);

    return 0;
}
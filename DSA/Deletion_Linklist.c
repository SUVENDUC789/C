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

Node *DeleteAtFirst(Node *head)
{
    Node *p = head;
    head = head->next;
    free(p);
    return head;
}

Node *DeleteAtBetweenNode(Node *head, int index)
{
    if (index == 0)
    {
        head = DeleteAtFirst(head);
        return head;
    }
    Node *p = head;
    Node *q = p->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

Node *DeleteAtLastNode(Node *head)
{
    Node *p = head;
    Node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    head->data = 10; // 0
    head->next = n1;

    n1->data = 20; // 1
    n1->next = n2;

    n2->data = 30; // 2
    n2->next = n3;

    n3->data = 40; // 3
    n3->next = NULL;

    Traversal(head);

    // Delete at first node
    // head = DeleteAtFirst(head);

    // delete at between node
    // head = DeleteAtBetweenNode(head, 2);

    // delete ate last node
    // head = DeleteAtLastNode(head);

    // Delete a node with given value 
    // head=deleteAtGivenValue(head,);
    Traversal(head);

    return 0;
}
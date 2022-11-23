#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

// 4->5->1->9->NULL
void deleteNode(struct ListNode* node) {
    struct ListNode*p=node,*q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p->val=(p->next)->val;
        p=p->next;
    }
    q->next=NULL;
    free(p);  
}
void Traversal(struct ListNode *head)
{
    struct ListNode *p = head;
    while (p->next != NULL)
    {
        printf("[%d]->", p->val);
        p = p->next;
    }
    printf("[%d]->NULL\n", p->val);
}

struct ListNode *createNode(int data)
{
    struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
    n->val = data;
    n->next = NULL;
    return n;
}
int main()
{
    struct ListNode *head = createNode(4);
    struct ListNode *n1 = createNode(5);
    struct ListNode *n2 = createNode(1);
    struct ListNode *last = createNode(9);

    head->next=n1;
    n1->next=n2;
    n2->next=last;

    Traversal(head);
    deleteNode(n1);
    Traversal(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
// https://leetcode.com/problems/insertion-sort-list/submissions/
struct ListNode
{
    int val;
    struct ListNode *next;
};
int SizeofList(struct ListNode *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}
int comp(const void *a, const void *b)
{
    const int *pa = a;
    const int *pb = b;
    return *pa - *pb;
}
struct ListNode *insertionSortList(struct ListNode *head)
{
    struct ListNode *p = head;
    struct ListNode *q = head;
    struct ListNode *f = head;
    int n = SizeofList(p);
    // printf("Size of list is : %d\n", n);
    int *a = (int *)calloc(n, sizeof(int));
    int k = 0;
    while (q != NULL)
    {
        a[k++] = q->val;
        q = q->next;
    }
    qsort(a, n, sizeof(int), comp);
    k = 0;
    while (f)
    {
        f->val = a[k++];
        f = f->next;
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    return head;
}
struct ListNode *createNode(int val)
{
    struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
    n->val = val;
    n->next = NULL;
    return n;
}
void Traverse(struct ListNode *head)
{
    struct ListNode *p = head;
    while (p->next != NULL)
    {
        printf("[%d]->", p->val);
        p = p->next;
    }
    printf("[%d]->NULL\n", p->val);
}
int main()
{
    // [4,2,1,3]
    struct ListNode *head = createNode(4);
    struct ListNode *n1 = createNode(2);
    struct ListNode *n2 = createNode(1);
    struct ListNode *last = createNode(3);

    head->next = n1;
    n1->next = n2;
    n2->next = last;

    Traverse(head);
    head = insertionSortList(head);
    Traverse(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int size, start, end, *a;
} Queue;

int isEmpty(Queue *q)
{
    if (q->end == q->start)
        return 1;
    return 0;
}

int isFull(Queue *q)
{
    if ((q->end + 1) % q->size == q->start)
        return 1;
    return 0;
}

void enQueue(Queue *q, int val)
{
    if (isFull(q))
    {
        printf("\nQueue is full\n");
    }
    else
    {
        q->end = (q->end + 1) % q->size;
        q->a[q->end] = val;
    }
}

void deQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        q->start = (q->start + 1) % q->size;
        printf("\nDeQueue element is : %d\n", q->a[q->start]);
    }
}

void showQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        for (int i = q->start; i <= q->end; i++)
        {
            printf("|%d ", q->a[i]);
        }
        printf("|\n");
    }
}

int main()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->size = 10;
    q->start = q->end = 0;
    q->a = (int *)calloc(q->size, sizeof(int));
    // printf("%d\n",sizeof(q->a));

    // enQueue(q, 10);
    // enQueue(q, 10 + 10);
    // enQueue(q, 10 + 20);
    // enQueue(q, 10 + 30);
    // enQueue(q, 10);
    // enQueue(q, 10 + 10);
    // enQueue(q, 10 + 20);
    // enQueue(q, 10 + 30);
    // enQueue(q, 10);
    // enQueue(q, 10 + 10);
    // enQueue(q, 10 + 20);
    // enQueue(q, 10 + 30);
    enQueue(q, 10);
    enQueue(q, 10 + 10);
    enQueue(q, 10 + 20);
    enQueue(q, 10 + 30);
    deQueue(q);
    showQueue(q);
    return 0;
}
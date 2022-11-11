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
    if (q->end == q->size - 1)
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
        q->end++;
        q->a[q->end] = val;
    }
}

int deQueue(Queue *q)
{

    if (isEmpty(q))
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        q->start++;
        return q->a[q->start];
    }
    return -1;
}

int main()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->size = 10;
    q->start = q->end = -1;
    q->a = (int *)calloc(q->size, sizeof(int));

    // implement BFS

    const int NumberOfNode = 7;
    int *visited = (int *)calloc(NumberOfNode, sizeof(int));
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0},
        {1, 1, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    int root = 0;
    printf("Enter starting vertex 0-6 : ");
    scanf("%d", &root);
    printf("\nBFS traversal is :>\n");
    printf("%d  ", root);
    visited[root] = 1;
    enQueue(q, root);

    while (!isEmpty(q))
    {
        int node = deQueue(q);
        for (int j = 0; j < NumberOfNode; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d  ", j);
                visited[j] = 1;
                enQueue(q, j);
            }
        }
    }

    return 0;
}
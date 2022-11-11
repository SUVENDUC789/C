#include <stdio.h>
#include <stdlib.h>
int comp(const void *elem1, const void *elem2)
{
    int f = *((int *)elem1);
    int s = *((int *)elem2);
    printf("f=%d|s=%d\n", f, s);
    if (f > s)
        return 1;
    if (f < s)
        return -1;
    return 0;
}
int main(int argc, char *argv[])
{
    int x[] = {1,2,4,1,3,4};

    qsort(x, sizeof(x) / sizeof(int), sizeof(int), comp);

    for (int i = 0; i < 6; i++)
        printf("%d ", x[i]);

    return 0;
}
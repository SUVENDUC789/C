#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void *a, const void *b)
{
    return strcmp(a, b);
}
int main()
{
    char name[][20] = {"January", "Fabruary", "March", "April", "May", "June", "July", "Auguest", "September", "October", "November", "December"};

    int size = sizeof(name) / 20;

    qsort(name, size, 20, comp);

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}
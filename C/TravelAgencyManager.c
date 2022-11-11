#include <stdio.h>
#include <stdlib.h>

typedef struct Details
{
    int id;
    char name[30];
    float km;
} TAM_t;

int main()
{
    int n;
    printf("\nEnter size : ");
    scanf("%d", &n);
    TAM_t *e = (TAM_t *)malloc(n * sizeof(TAM_t));
    for (int i = 0; i < n; i++)
    {
        printf("\n[%d]Id = ", i + 1);
        scanf("%d", &e[i].id);
        fflush(stdin);

        printf("\n[%d]Name = ", i + 1);
        gets(e[i].name);

        printf("\n[%d] km = ", i + 1);
        scanf("%f", &e[i].km);
    }

    // printf("SL  ID  Name    Km\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d) %d  %s  %f\n", i + 1, e[i].id, e[i].name, e[i].km);
    }
    return 0;
}
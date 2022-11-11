#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
    int id;
    char name[20];
    int marks;
} Student_t;

int comp(const void *pa, const void *pb)
{
    const Student_t *a = pa;
    const Student_t *b = pb;
    return a->marks - b->marks;
}
int main()
{
    Student_t s[] = {
        {412, "Suvendu", 420},
        {411, "Supratim", 415},
        {420, "Hritik", 434},
        {404, "Avas", 350},
        {444, "Debarpan", 401}};

    qsort(s, sizeof(s) / sizeof(Student_t), sizeof(Student_t), comp);

    for (int i = 0; i < sizeof(s) / sizeof(Student_t); i++)
    {
        printf("%d  %s  %d\n", s[i].id, s[i].name, s[i].marks);
    }
    return 0;
}
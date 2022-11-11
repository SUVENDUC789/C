#include <stdio.h>
#include <string.h>

// typedef <preveousdatatype> <aliasdatatype>;
typedef int i;
typedef char c;

typedef struct Devoloper
{
    i id;
    c name[100];
    c specalist[100];
} Emp;

Emp suv, sup;
void printEmpDetails(Emp *employee)
{
    printf("Id = %d | Name = %s | Specalist = %s\n", employee->id, employee->name, employee->specalist);
    employee->id = 444;
}
int main()
{

    printf("Size of suv var is : %d\n", sizeof(suv));
    printf("Size of sup var is : %d\n", sizeof(sup));

    suv.id = 1;
    strcpy(suv.name, "Suvendu");
    strcpy(suv.specalist, "react + django");
    printf("Id = %d | Name = %s | Specalist = %s\n", suv.id, suv.name, suv.specalist);

    printf("Enter id : ");
    scanf("%d", &sup.id);
    fflush(stdin); // extra buffer avoid
    printf("Enter name : ");
    gets(sup.name);
    fflush(stdin); // extra buffer avoid
    printf("Enter specalist : ");
    gets(sup.specalist);
    printf("Id = %d | Name = %s | Specalist = %s\n", sup.id, sup.name, sup.specalist);

    Emp debu;
    debu.id = 3;
    strcpy(debu.name, "Debarpan");
    strcpy(debu.specalist, "Besic python + React");
    printEmpDetails(&debu);
    printEmpDetails(&debu);

    return 0;
}
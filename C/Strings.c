#include <stdio.h>
// gets()---> full string input with white space
void printRahul(char *s)
{
    int size = 0;
    printf("[");
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c,", s[i]);
        size = i;
    }
    printf("]\n");
    printf("Size is : %d\n", size + 1);
}
int main()
{
    char rahul[] = {'s', 'u', 'v', 'e', 'd', 'u', '\0'};
    char *str = &rahul[0];
    printRahul(str);

    char name[] = "Bantu";
    str = &name[0];
    printRahul(str);

    // char name[50];
    // printf("Enter name : ");
    // scanf("%s", name); // without using & sign
    // gets(name);
    // printf("Name = %s", name);
    // puts(name);

    return 0;
}
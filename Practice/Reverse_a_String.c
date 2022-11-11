#include <stdio.h>
void mystrRev(char *name)
{
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    // printf("Len is %d\n", len);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = name[i];
        name[i] = name[len - 1 - i];
        name[len - 1 - i] = temp;
    }
}
int main()
{
    char name[30];
    printf("\nEnter name : ");
    gets(name);

    mystrRev(name);
    printf("Revese string is : %s\n", name);
    return 0;
}
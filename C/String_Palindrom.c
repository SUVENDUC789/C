#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Check string is palindrom or not : ");
    scanf("%s", string);
    char newstring[100];
    strcpy(newstring, string);
    char *revstr = strrev(string);
    if (strcmp(revstr, newstring) == 0)
    {
        printf("String is palindrom");
    }
    else
    {
        printf("String is not palindrom");
    }
    return 0;
}
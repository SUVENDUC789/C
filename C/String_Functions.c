#include <stdio.h>
#include <string.h>
int main()
{
    char name1[] = "suvendu";
    char name2[] = "chowdhury";
    // puts(strcat(name1, name2));
    printf("\n");
    printf("%s size : %d\n", name1, strlen(name1));
    printf("%s size : %d\n", name2, strlen(name2));
    printf("%s reverse is : %s\n", name1, strrev(name1));

    return 0;
}
#include <stdio.h>
int main()
{
    // for (int i = 0; i < 128; i++)
    // {
    //     printf("%d) %c\n", i, i);
    // }
    
    for (int i = 97; i <= 122; i++)
    {
        printf("%d) %c\n", i, i);
    }
    printf("======================\n");
    for (int i = 65; i <= 90; i++)
    {
        printf("%d) %c\n", i, i);
    }
    return 0;
}
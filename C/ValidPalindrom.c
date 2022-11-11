// https://leetcode.com/problems/valid-palindrome/submissions/
/*Leet code problem*/

#include <stdio.h>
#include <string.h>
int check(char ch)
{
    char punch[] = "!\"#$%%&'()*+, -./:;<=>?@[\\]^_`{|}~";
    for (int i = 0; i < strlen(punch); i++)
    {
        if (punch[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}
void Parse(char *p)
{
    int ln = 0;
    int index = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (check(p[i]))
        {
            ln = 1;
            continue;
        }

        else if (!check(p[i]))
        {
            ln = 0;
        }

        if (ln == 0)
        {
            p[index] = p[i];
            index++;
        }
    }
    p[index] = '\0';

    for (int i = 0; i < strlen(p); i++)
    {
        if (!((p[i] >= 97) && (p[i] <= 122)))
        {
            p[i] += 32;
        }
    }
}
int main()
{
    // char p[] = "bunchod";
    // char p[] = "a.";
    char p[] = "race a car";
    // char p[] = "A man, a plan, A canAl: Panama";
    Parse(p);

    printf("Reverse= %s\n", strrev(p));
    printf("str= %s\n", p);

    for (int i = 0; i < strlen(p) / 2; i++)
    {
        if (p[i] != p[strlen(p) - 1 - i])
        {
            printf("Not palindrom");
            return 0;
        }
    }
    printf("Palindrom");
    return 0;
}
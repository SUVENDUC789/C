#include <stdio.h>
#include <string.h>

void Parser(char *p)
{
    // remove tag
    int ln = 0;
    int index = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] == '<')
        {
            ln = 1;
            continue;
        }
        else if (p[i] == '>')
        {
            ln = 0;
            continue;
        }

        if (ln == 0)
        {
            p[index] = p[i];
            index++;
        }
    }
    p[index] = '\0';

    // Avoid extra tailing space
    while (p[0] == ' ')
    {
        for (int i = 0; i < strlen(p); i++)
        {
            p[i] = p[i + 1];
        }
    }

    // Remove extra trailing space in last
    while (p[strlen(p) - 1] == ' ')
    {
        p[strlen(p) - 1] = '\0';
    }
}

int main()
{
    char parse[] = "<h1>        Hello    world             </h1>";
    Parser(parse);
    printf("%s", parse);
    return 0;
}
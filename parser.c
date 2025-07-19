#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void parser(char *html)
{
    bool insideTag = false;

    for (size_t i = 0; html[i] != '\0'; i++)
    {
        /* code */
        if (html[i] == '<')
        {
            insideTag = true;
        }
        else if (html[i] == '>')
        {
            /* code */
            insideTag = false;
        }
        else if (!insideTag)
        {
            printf("%c", html[i]);
        }
    }
}

int main(int argc, char const *argv[])
{

    char html[] = {"<h1>                     this is the heading                 </h1>     "};

    // printf("enter the html tag\n");
    // gets(html);

    printf("output \n");
    parser(html);
    while (html[0] == ' ')
    {
        for (size_t i = 0; i < strlen(html); i++)
        {
            html[i] = html[i + 1];
        }
    }

    while (html[strlen(html) - 1] == ' ')
    {
        html[strlen(html) - 1] = '\0';
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    char str[90];
    printf("say yes or no in any case \n");
    gets(str);

    if (strcasecmp(str, "yes i want it ") == 0)
    {
        printf("hello");
    }
    else if (strcasecmp(str, "no") == 0)
    {
        printf("nah");
    }
    else
    {
        printf("bo");
    }

    return 0;
}

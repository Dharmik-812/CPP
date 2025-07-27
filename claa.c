#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (strcasecmp(argv[1], "add") == 0)
    {

        printf("%d ", a + b);
    }
    else if (strcasecmp(argv[1], "sub") == 0)
    {
        printf("%d ", a - b);
    }
    else if (strcasecmp(argv[1], "div") == 0)
    {
        printf("%d ", a / b);
    }
    else if (strcasecmp(argv[1], "mul") == 0)
    {
        printf("%d ", a * b);
    }

    else
    {
        printf("unknown ");
    }

    return 0;
}

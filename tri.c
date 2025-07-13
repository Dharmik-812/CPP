#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ep;

    printf("enter ep\n");
    scanf(" %d", &ep);

    // PART 1
    for (size_t a = ep; a > 1; a--)
    {
        for (size_t i = a; i <= ep; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    // PART 2
    for (size_t a = 1; a <= ep; a++)
    {
        for (size_t i = a; i <= ep; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

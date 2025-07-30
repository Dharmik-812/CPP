#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ep;

    printf("row num \n");
    scanf("%d", &ep);

    for (size_t i = 1; i <= ep; i++)
    {

        for (size_t k = i; k <= ep; k++)
        {
            printf(" ");
        }
        for (size_t j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        // for (size_t k = i; k >= 1; k--)
        // {
        //     printf(" ");
        // }

        printf("\n");
    }

    return 0;
}

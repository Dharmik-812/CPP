#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;

    printf("how many row ");
    scanf("%d", &row);
    for (size_t i = 1; i <= row; i++)

    {
        for (size_t j = 0; j <= row - i; j++)

        {
            printf(" ");
        }

        // printf("*");
        if (i > 1)
        {
            for (size_t k = 1; k <= 2 * i - 3; k++)

            {
                printf(" ");
            }

            for (size_t j = row - i; j >= 1; j--)
            {
                printf(" ");
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
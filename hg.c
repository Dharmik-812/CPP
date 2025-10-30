
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row;
    printf("how many row ");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--)
    {

        for (int j = 0; j <= row - i; j++)
        {
            printf(" ");
        }

        if (i == row || i == 1)
        {

            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }
        }

        else
        {

            printf("*");

            for (int j = 1; j <= (2 * i - 3); j++)

            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row - i; j++)

        {
            printf(" "); /* code */
        }

        printf("*");

        if (i == row)
        {
            for (size_t k = 0; k < 2 * row - 2; k++)
            {
                printf("*");
                /* code */
            }
        }

        else if (i > 1)
        {

            for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");

            /* code */
        }

        printf("\n");
    }

    return 0;
}

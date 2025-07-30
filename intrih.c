#include <stdio.h>

int main()
{
    int row;

    printf("Enter row: ");
    scanf("%d", &row);

    for (int i = row; i >= 1; i--)
    {

        for (int j = 0; j < row - i; j++)
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

    return 0;
}
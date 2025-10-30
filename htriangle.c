#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    printf("enter row");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {

        for (int j = 0; j <= row - i; j++)
        {
            printf(" ");
        }

        printf("*");

        if (i == row)
        {
           for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf("*");
            }

            printf("*");
        }
        else if (i > 1)
        {

            for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
                
            }

            printf("*");
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, cols;
    printf("enter row \n");
    scanf("%d", &row);
    printf("enter cols \n");

    scanf("%d", &cols);
    for (size_t i = 1; i <= cols; i++)
    {
        printf("*");
    }

    printf("\n");

    for (size_t i = 0; i < row - 2; i++)
    {

        printf("*");

        for (size_t j = 0; j < cols - 2; j++)
        {
            printf(" ");
        }

        printf("*");

        printf("\n");
    }

    for (size_t i = 1; i <= cols; i++)
    {
        printf("*");
    }
    return 0;
}

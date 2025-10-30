
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row;
    printf("how many row ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {

        for (int j = 2 * i - 1; j <= 1; j++)
        {
            printf("*");
        }

        for (size_t j = 0; j <= row - i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}

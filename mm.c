#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter rows");
    scanf("%d", &x);
    printf("enter colom");
    scanf("%d", &y);
    int mat1[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("so you matrix 1 is \n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf(" mat1%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("now lets do for the second matrix\n");

    int X, Y;
    printf("enter rows");
    scanf("%d", &X);
    printf("enter colom");
    scanf("%d", &Y);
    int mat2[X][Y];

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("so you matrix 2 is \n  ");

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    if (y != X)
    {
        printf("sorry bruh cant do multiplication against the rules ");
    }
    else
    {

        int mat3[x][Y];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                mat3[i][j] = 0;
                for (int k = 0; k < y; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
            printf("\n");
        }

        printf("your answer is \n");

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                printf("mat3%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

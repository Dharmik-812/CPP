#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("whats a \n");
    scanf("%d", &a);
    printf("whats b \n");
    scanf("%d", &b);
    printf("whats c \n");
    scanf("%d", &c);
    char s_A[10];
    char s_B[10];
    char s_C[10];

    snprintf(s_A, sizeof(s_A), "%d", a);
    snprintf(s_B, sizeof(s_A), "%d", b);
    snprintf(s_C, sizeof(s_C), "%d", c);

    char abc[30] = "";

    strcat(abc, s_A);
    strcat(abc, s_B);
    strcat(abc, s_C);

    int d1 = pow(a, 3) + pow(b, 3) + pow(c, 3);
    char d[30];
    snprintf(d, sizeof(d), "%d", d1);

    if (strcmp(d, abc) == 0)
    {
        printf("given number is armstrong number ");
    }

    else
    {
        printf(" not am number ");
    }

    return 0;
}

    
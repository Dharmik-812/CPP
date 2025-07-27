#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int ep;

    printf("enter a to get it multiplied\n ");
    scanf("%d", &a);

    printf("how many times ?? \n ");
    scanf("%d", &ep);

    int result = 1;
    for (size_t i = 1; i <= ep; i++)
    {
        result *= a;
        printf("a^%d  = %d\n", i, result);
    }

    return 0;
}

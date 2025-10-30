#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fact(int n)

{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {

        return (n * fact(n - 1));
    }
}

int main(int argc, char const *argv[])
{
    int x;
    printf("how many numbers you wanna add ? \n");
    scanf("%d", &x);

    char num[x + 1];

    for (size_t i = 0; i < x; i++)
    {
        char y;
        printf("enter the number %d ", i + 1);
        scanf(" %c", &y);
        num[i] = y;

        /* code */
    }

    num[x] = '\0';

    int len = strlen(num);
    int sum = 0;

    int og = atoi(num);

    for (size_t i = 0; i < len; i++)
    {
        int digit = num[i] - '0';
        sum += fact(digit);
    }

    if (sum == og)
    {
        printf(" yes sm");
    }

    else
    {

        printf("no sm");
    }

    return 0;
}

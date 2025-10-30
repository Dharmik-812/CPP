#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int x;
    printf("how many numbers you wanna add ??");
    scanf("%d", &x);

    char num[x + 1];
    for (size_t i = 0; i < x; i++)
    {
        char y;
        printf("enter the digit %d :", i + 1);
        scanf(" %c", &y);
        num[i] = y;
    }
    num[x] = '\0';
    int len = strlen(num);
    int sum = 0;

    int og = atoi(num);

    for (size_t i = 0; i < len; i++)
    {
        int digit = num[i] - '0';
        sum += pow(digit, len);
    }

    if (sum == og)
    {
        printf(" yes am");
    }

    else
    {

        printf("no am");
    }

    return 0;
}

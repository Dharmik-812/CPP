#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)

    {
        return 1;
    }

    else
    {
        return (num * factorial(num - 1));
    }
}
int main(int argc, char const *argv[])

{
    int num;
    printf("enter the number you want the factorail of \n ");

    scanf("%d", &num);

    printf("the factoral of %d is %d ", num, factorial(num));
}

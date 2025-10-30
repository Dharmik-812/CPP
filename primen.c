#include <stdio.h>

int ispnum(int n)

{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (size_t i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("say the number :");
    scanf("%d", &num);

    if (ispnum(num))
    {
        /* code */
        printf("yes prime number ");
    }

    else
    {

        printf("not prime number ");
    }

    return 0;
}

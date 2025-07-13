#include <stdio.h>
long long int febo(int n)
{
    if (n >= 50)
    {
        return n;
    }
    else
    {
        return febo(n + 1) + febo(n + 2);
    }
}

int main()
{
    int num, ep;
    printf("Enter starting number: ");
    scanf("%d", &num);

    printf("Enter number of steps: ");
    scanf("%d", &ep);

    for (int i = 0; i < ep; i++)
    {
        num = febo(i); // use result as new input
        printf("%d  ", i);
    }

    return 0;
}

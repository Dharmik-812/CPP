#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, ep;
    printf("enter the num \n");
    scanf("%d", &number);
    printf("enter the ep \n");
    scanf("%d", &ep);
    int sp = number;
    int a = number;
    int b = number;
    int next;

    for (size_t i = sp; i <= ep; i++)
    {
        printf(" %d", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

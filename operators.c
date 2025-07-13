#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("a is\n");
    scanf("%d", &a);

    printf("b is\n");
    scanf("%d", &b);

    printf("! b = %d \n", !b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / b);

    return 0;
}

#include <stdio.h>

void numasc(int *a, int *b)
{
    int c, d;
    c = *a + *b;
    d = *a - *b;
    *a = c;
    *b = d;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("whats a \n");
    scanf("%d", &a);
    printf("whats b \n");
    scanf("%d", &b);

    printf("before the change a and b is %d and %d", a, b);
    numasc(&a, &b);
    printf("after the change a and b is %d and %d", a, b);

    return 0;
}

#include <stdio.h>

int sum(int a, int b)

{
    return a + b;
}

void gmUser(int (*fptr)(int, int))

{
    printf("good morning\n");
    printf("sum is %d", fptr(4, 9));
}
void geUser(int (*fptr)(int, int))

{
    int a, b;
    printf("enter a ");
    scanf("%d", &a);
    printf("enter b ");
    scanf("%d", &b);
    printf("good evening\n");
    printf("sum is %d", fptr(a, b));
}

int main(int argc, char const *argv[])
{
    int (*ptr)(int, int);
    ptr = &sum;

    printf("sum is %d \n", ptr(4, 5));

    gmUser(ptr);
    geUser(ptr);
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int *ptnum = &a;
    int *pt2 = NULL;

    printf("the value of a is \n");
    scanf("%d", &a);
    printf("the value of a %d \n", a);
    printf("the address of a with normal & a is %x \n", &a);
    printf("the address of a with pointer a is %x\n", ptnum);
    printf("the address of ptnum is\n %x ", &ptnum);
    printf("the value of a with pt num is %d\n ", *ptnum);
    printf(" the value of pt2 of null is %d\n", pt2);
    printf(" the address of pt2 of null is %x\n", &pt2);
    return 0;
}

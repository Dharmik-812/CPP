#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    int n;
    printf("enter the size of array \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        printf("enter the value in %d \n", i);
        scanf("%d", &ptr[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("the value in %d  is %d \n", i, ptr[i]);
    }

    free(ptr);

    printf("enter the size of array \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        printf("enter the value in %d \n", i);
        scanf("%d", &ptr[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("the value in %d  is %d \n", i, ptr[i]);
    }

    printf("enter the  newsize of  new array \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        printf("enter the  new value in %d \n", i);
        scanf("%d", &ptr[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("the new  value in %d  is %d \n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}

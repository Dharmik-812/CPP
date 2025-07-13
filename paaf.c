#include <stdio.h>

void func1(int arrry[])

{
    for (size_t i = 0; i < 7; i++)
    {
        printf("your entered value in %d is %d \n ", i, arrry[i]);
    }
}

void func2(int *ptr)

{
    for (size_t i = 0; i < 7; i++)
    {
        printf("your entered value in %d is %d \n ", i, *(ptr + i));
    }
}
int main(int argc, char const *argv[])
{
    int arr[7];

    for (size_t i = 0; i < 7; i++)
    {
        printf("enter arry value in %d : \n", i);
        scanf("%d", &arr[i]);
    }

    // func1(arr);
    func2(arr);

    return 0;
}

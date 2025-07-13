#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    printf("the value of firt is  %d \n", *arr);
    printf("the value of firt is  %d \n", arr[0]);
    printf("the value of firt is  %d \n", *(arr));
    printf("the address of firt is %d \n ", &arr);             
    printf("the address of firt is %d \n ", &arr[0]);
    printf("the address of firt is %d \n ", (&arr[0]));

    return 0;
}

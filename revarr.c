#include <stdio.h>
#include <string.h>

void arrrev(char arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf(" %c", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    char str[90];
    gets(str);
    int size = strlen(str);

    arrrev(str, size);
    return 0;
}

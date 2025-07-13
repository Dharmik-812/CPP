#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[6];

    for (size_t i = 0; i < 6; i++)
    {
        printf("enter your marks for %d  \n", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 23)
        {
            printf("your entered marks for %d is considerd failed in %d", i + 1, marks[i]);
        }

        printf("\n");
    }

    for (size_t i = 0; i < 6; i++)
    {
        printf("your marks for %d is %d \n", i + 1, marks[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int x;
    printf("how many numbers you wanna compare ??\n");
    scanf("%d", &x);

    int num[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (size_t i = 0; i < x - 1; i++)
    {
        for (size_t j = i + 1; j < x; j++)
        {
            if (num[j] > num[i])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d", num[i]);
        if (i != x - 1)
        {
            printf(" > ");
        }
    }
    
    printf("\n");

    /* code */
    return 0;
}

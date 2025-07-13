#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, sp, ep;
    printf("whats the number for the table \n");

    scanf("%d", &num);
    printf("then the starting point \n");
    scanf("%d", &sp);
    printf("then the end point \n");
    scanf("%d", &ep);

    printf("table of %d from %d to %d ", num, sp, ep);

    for (size_t i = sp; i <= ep; i++)
    {
        printf("%d * %d = %d \n ", num, i, num * i);
    }

    return 0;
}

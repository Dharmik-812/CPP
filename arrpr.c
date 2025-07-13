#include <stdio.h>

void prstr(char str[])
{
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char str[250];

    gets(str);
    printf("using function \n");

    prstr(str);
    printf("using printf \n %s", str);

    printf("\nusing puts \n");
    puts(str);

    return 0;
}

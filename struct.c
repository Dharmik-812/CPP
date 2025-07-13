#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student
{
    char name[90];
    int id;

    int marks;
    char address[90];
};

int main(int argc, char const *argv[])
{
    struct student dharmik, averain, soltice;
    char input[90];

    printf("who are you ? \n dharmik \n averain \n soltice ?");
    gets(input);

    if (strcasecmp(input, "dharmik") == 0)
    {
        strcpy(dharmik.name, "dharmik");

        printf("enter your details \n ");
        printf(" student id \n");
        scanf("%d", &dharmik.id);
        getchar();
        printf(" student  marks  \n");
        scanf("%d", &dharmik.marks);
        getchar();
        printf("student address \n");
        gets(dharmik.address);

        printf("your name is %s\n", dharmik.name);
        printf("your id is %d\n", dharmik.id);
        printf("your marks are %d\n", dharmik.marks);
        printf("your address is %s\n", dharmik.address);
    }
    else if (strcasecmp(input, "averain") == 0)
    {
        strcpy(averain.name, "averain");

        printf("enter your details \n ");
        printf(" student id \n");
        scanf("%d", &averain.id);
        getchar();
        printf(" student  marks  \n");
        scanf("%d", &averain.marks);
        getchar();
        printf("student address \n");
        gets(averain.address);

        printf("your name is %s\n", averain.name);
        printf("your id is %d\n", averain.id);
        printf("your marks are %d \n", averain.marks);
        printf("your address is %s\n", averain.address);
    }
    else if (strcasecmp(input, "soltice") == 0)
    {
        strcpy(soltice.name, "soltice");

        printf("enter your details \n ");
        printf(" student id \n");
        scanf("%d", &soltice.id);
        getchar();
        printf(" student  marks  \n");
        scanf("%d", &soltice.marks);
        getchar();
        printf("student address \n");
        gets(soltice.address);

        printf("your name is %s\n", soltice.name);
        printf("your id is %d\n", soltice.id);
        printf("your marks are %d \n", soltice.marks);
        printf("your address is %s\n", soltice.address);
    }
    else
    {
        printf("wrong name blud");
    }

    return 0;
}

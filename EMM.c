#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *id;
    char cn[15];
    int nm;

start:
    printf("whats your comapny name ,dharmik,averain or soltice ?? \n");
    fgets(cn, sizeof(cn), stdin);
    cn[strcspn(cn, "\n")] = 0;

    if (strcasecmp(cn, "dharmik") == 0)
    {
        nm = 1;
    }
    else if (strcasecmp(cn, "averain") == 0)
    {
        nm = 2;
    }
    else if (strcasecmp(cn, "soltice") == 0)
    {
        nm = 3;
    }
    else
    {
        printf("Wrong name, blud.\n\n");
        goto start;
    }

    switch (nm)
    {
    case 1:
        printf("so your company is dharmik since it has 4 character id ,i command you to enter it ");
        id = (char *)malloc(5 * sizeof(char));

        fgets(id, 5, stdin);
        id[strcspn(id, "\n")] = 0;
        printf("your id is %s", id);
        free(id);

        break;
    case 2:
        printf("so your company is dharmik since it has 7 character id ,i command you to enter it ");
        id = (char *)malloc(8 * sizeof(char));

        fgets(id, 8, stdin);
        id[strcspn(id, "\n")] = 0;
        printf("your id is %s", id);
        free(id);

        break;
    case 3:
        printf("so your company is dharmik since it has 3 character id ,i command you to enter it ");
        id = (char *)malloc(4 * sizeof(char));

        fgets(id, 4, stdin);
        id[strcspn(id, "\n")] = 0;
        printf("your id is %s", id);
        free(id);

        break;

    default:
        break;
    }

    return 0;
}

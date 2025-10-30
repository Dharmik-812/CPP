#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *st;
    char *name;
    int n;
    static int sp = 0;
    static int sc = 0;

    printf("this is the rock paper scissors game first i want your name \n ");
    printf("enter your name before that tell me how many chracter your name has \n ");
    scanf("%d", &n);
    getchar();
    
    name = (char *)malloc((n + 1) * sizeof(char));
    printf("now enter your name \n");
    fgets(name, (n + 1) * sizeof(char), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("so your name is %s\n", name);

    srand(time(NULL));
    st = (char *)malloc(10 * sizeof(char));
    while (sc < 3 && sp < 3)
    {

        printf("choose rock paper or scissors\n");

        fgets(st, 10, stdin);
        st[strcspn(st, "\n")] = '\0';

        switch (rand() % 3)
        {
        case 0:
            printf("computer chooses rock\n");
            if (strcasecmp(st, "rock") == 0)
            {
                printf("its a tie\n");
            }
            else if (strcasecmp(st, "paper") == 0)
            {
                printf("computer lost and %s has won this time and gets one point\n", name);
                sp++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }
            else if (strcasecmp(st, "scissors") == 0)
            {
                printf("computer won and %s has lost this time \n", name);
                sc++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }

            break;

        case 1:
            printf("computer chooses paper\n");
            if (strcasecmp(st, "paper") == 0)
            {
                printf("its a tie\n");
            }
            else if (strcasecmp(st, "scissors") == 0)
            {
                printf("computer lost and %s has won this time and gets one point\n", name);
                sp++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }
            else if (strcasecmp(st, "rock") == 0)
            {
                printf("computer won and %s has lost this time \n", name);
                sc++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }

            /* code */
            break;

        case 2:
            printf("computer chooses scissors\n");
            if (strcasecmp(st, "scissors") == 0)
            {
                printf("its a tie\n");
            }
            else if (strcasecmp(st, "rock") == 0)
            {
                printf("computer lost and %s has won this time and gets one point \n", name);
                sp++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }
            else if (strcasecmp(st, "paper") == 0)
            {
                printf("computer won and %s has lost this time \n", name);
                sc++;

                printf("the score of the %s is  %d\n", name, sp);
                printf("the score of the computer  is  %d\n", sc);
            }
            break;

        default:
            break;
        }

        if (sp == 3)
        {
            printf("%s won", name);
        }
        else if (sc == 3)
        {
            /* code */
            printf("%s lost", name);
        }
        else
        {
            continue;
        }
    }
    free(name);
    free(st);

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mat, sci;
    printf("how many marks did you got in maths out of 100\n ");
    scanf("%d", &mat);
    printf("what about science\n ");
    scanf("%d", &sci);

    if (mat > 100 || sci > 100)

    {
        printf("you have enter more than i asked you for in the subject ");

        if (mat > 100)
        {
            printf(" maths");
        }
        if (sci > 100)
        {
            printf(" science ");
        }
    }

    else if (mat >= 28 && sci >= 28)
    {
        printf("you have passed both the exams and you get nothing and you have got %d in maths and %d in science", mat, sci);
    }

    if (mat < 28 || sci < 28)
    {
        printf("you have failed the exam in");

        if (mat < 28 && sci > 28)
        {
            printf(" maths but passed in science ");
        }
        if (sci < 28, mat > 28)
        {
            printf(" science but passed in maths ");
        }

        if (mat < 28)

        {
            printf(" maths ");
        }

        if (sci < 28)

        {
            printf(" science  ");
        }
    }

    return 0;
}

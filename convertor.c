#include <stdio.h>

int gtkg(int g)
{
    return g / 1000;
}

int kgtg(int kg)
{

    return kg * 1000;
}

int cmtm(int cm)

{
    return cm / 100;
}

int mtcm(int m)
{
    return m * 100;
}

float ctf(int c)
{
    return c * 9 / 5 + 32;
}

float ftc(int f)
{

    return (f - 32) * 5 / 9;
}

int main(int argc, char const *argv[])
{
    int choice, g, kg, cm, m, c, f, y, n, yy;
start:
    printf("This is a convertor \n");
    printf("1: gm to kg\n");
    printf("2: kg to gm\n");
    printf("3: cm to m\n");
    printf("4: m to cm\n");
    printf("5: c to f\n");
    printf("6: f to c\n");
    printf("Enter your choice from 1 to 6: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    gram:
        printf("enter the gram value ");
        scanf("%d", &g);
        printf("your conversion for %d gms will be %d kg \n", g, gtkg(g));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto gram;
        }

        else
        {
            break;
        }

        break;
    case 2:
    kilogram:
        printf("enter the kilogram value ");
        scanf("%d", &kg);
        printf("your conversion for %d kg will be %d gm", kg, kgtg(kg));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto kilogram;
        }

        else
        {
            break;
        }

        break;
    case 3:
    cm:
        printf("enter the centimeter value");
        scanf("%d", &cm);
        printf("your conversion for %d cm will be %d m", cm, cmtm(cm));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto cm;
        }

        else
        {
            break;
        }
        break;
    case 4:
    m:
        printf("enter the meter value ");
        scanf("%d", &m);
        printf("your conversion for %d m will be %d cm", m, mtcm(m));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto m;
        }

        else
        {
            break;
        }
        break;
    case 5:
    c:
        printf("enter the celcius value ");
        scanf("%d", &c);
        printf("your conversion for %d c will be %0.2ff", c, ctf(c));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto c;
        }

        else
        {
            break;
        }
        break;
    case 6:
    f:
        printf("enter the farenhit value ");
        scanf("%d", &f);
        printf("your conversion for %d f will be %0.2fc", f, ftc(f));
        printf("do you wanna continue? if yes say 7 if no use any number  if you want to use this again say 8  \n");
        scanf("%d", &choice);
        if (choice == 7)
        {
            goto start;
        }
        if (choice == 8)
        {
            goto f;
        }

        else
        {
            break;
        }
        break;

    default:
        break;
    }

    if (choice >= 9)
    {
        printf("nigga cant you read ???? i said only 1 to 8  now go back and do ");
        goto start;
    }

    return 0;
}

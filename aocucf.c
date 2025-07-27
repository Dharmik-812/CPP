#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int uD(int x1, int y1, int x2, int y2)

{
    int d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return d;
}

int mD(int x1, int y1, int x2, int y2)
{
    int e = abs(x2 - x1) + abs(y2 - y1);
    return e;
}
int aOC(int x1, int y1, int x2, int y2, int (*fptr)(int, int, int, int))
{
    int radius = fptr(x1, y1, x2, y2);
    float area = PI * radius * radius;
    printf("Area of the circle is %.2f\n", area);
    return 0;
}

int main(int argc, char const *argv[])
{

    int x1, x2, y1, y2;
    printf("enter x1: \n");
    scanf("%d", &x1);
    printf("enter x2: \n");
    scanf("%d", &x2);
    printf("enter y1: \n");
    scanf("%d", &y1);
    printf("enter y2: \n");
    scanf("%d", &y2);

    //  int (*ptr)(int, int, int, int) = mD;
    aOC(x1, y1, x2, y2, mD);
    aOC(x1, y1, x2, y2, uD);

    return 0;
}

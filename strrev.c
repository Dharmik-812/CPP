#include <stdio.h>
#include <string.h>
int main()
{
    int a[10],i,max,min;
for(i=0; i<10; i++)
{
printf("Enter number %d: ",i+1);
scanf("%d",&a[i]);
}


max=a[0];
min=a[0];
for(i=1; i<10; i++)
{
if(a[i]>max)
{
    max=a[i];

}
else if(a[i]<min){

    min=a[i];

}
}

for (size_t i = 0; i < 10; i++)
{
    printf("%d" , a[i]);
    /* code */
}


return 0;
}
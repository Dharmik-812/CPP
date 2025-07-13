#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s1[50];
    char s2[50];
    char s3[50];
    char s4[50];

    printf("first one\n");
    gets(s1);
    printf("second one\n");
    gets(s2);
    printf("third one\n");
    gets(s3);
    puts(strrev(strcat(strcat(s1, s2), s3)));
    printf("copy of s1 to s2 is %s \n", strcpy(s1, s4));
    printf("strcmp of s1 s2 is  %d \n ", strcmp(s1, s2));
    printf("length of s1  %d \n", strlen(s1));
    printf("length of s2 %d \n", strlen(s2));
    printf("length of s3 %d \n", strlen(s3));
    printf("length of s4 %d \n", strlen(s4));
    return 0;
}

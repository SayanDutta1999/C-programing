#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[2], str2[100];
    gets(str1);
    fflush(stdin);
    gets(str2);
    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[3];
    scanf("%s", s);
    printf("%s\n", s);
    printf("%d\n", strlen(s));
    printf("%d", sizeof(s));

    return 0;
}
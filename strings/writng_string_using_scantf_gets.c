#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    printf("Enter your name:");
    /* here arry s is like poiter to 
    the 1st element of the array so no need to add &.*/
   // scanf("%s", s);
    gets(s);
    printf("%s", s);

    return 0;
}
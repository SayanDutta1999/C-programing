//string concatinate using strcat
#include<stdio.h>
#include<string.h>
int main()
{
	char source[100], target[100];
    printf("Enter the souce string:");
    gets(source);
    printf("Enter the target string:");
    gets(target);
    strcat(target, source );
    //printf("source is:%s\n", source);
    printf("target is:%s\n", target);


}

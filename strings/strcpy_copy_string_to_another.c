// strcpy copy string to another
#include<stdio.h>
#include<string.h>
int main()
{
	char source[100], target[100];
    printf("Enter the string:");
    gets(source);
    strcpy(target, source );
    printf("source is:%s\n", source);
    printf("target is:%s\n", target);


}

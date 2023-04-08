/*Program to demonstrate printing of a string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[25];
	printf("%sEnter your name:");
	gets(name);
	puts("Hello");
	puts(name);
	return 0;
}


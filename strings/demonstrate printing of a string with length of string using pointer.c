//demonstrate printing of a string with length of string using pointer
#include<stdio.h>
int main()
{
	char name[] = "sayandutta";
	char *ptr;
	ptr = name; //store base address of string
	int length;
	
	while(*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr +=1;
	}
	length = ptr;
	printf("\nlength is: %d", length);
	
}

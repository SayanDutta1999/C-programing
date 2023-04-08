#include<stdio.h>
int main()
{
	char str[100], i = 0, length;
	printf("enter the string:");
	gets(str);
	while(str[i] != '\0')
	{
		i++;
	}
	length = i;
	
	printf("the length of the string is: %d", length);
}

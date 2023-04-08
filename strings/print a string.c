//demonstrate printing of a string with length of string
#include<stdio.h>
int main()
{
	char str[] = "SayanDutta";
	int i = 0, length;
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 1;
	}
	length = i;
	printf("\nlength of the string is :%d", length);
	
	
	
	
	
}

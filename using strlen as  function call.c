// using strlen as  function call
#include<stdio.h>
int xstrlen(char *);
int main()
{
	char str[100], str2[100];
	int len1, len2;
	printf("enter the string:");
	gets(str);
	len1 = xstrlen(str);
	printf("String is = %s\nLength is = %d", str, len1);
	printf("\nenter the string 2:");
	gets(str2);
	len2 = xstrlen(str2);
	printf("String is = %s\nLength is = %d", str2, len2);

}

int xstrlen(char *str)
{
	int length = 0;
	
	while(*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], str2[100];
	int len1, len2;
	printf("enter the string:");
	gets(str);
	len1 = strlen(str);
	printf("String is = %s\nLength is = %d", str, len1);
	printf("\nenter the string 2:");
	gets(str2);
	len2 = strlen(str2);
	printf("String is = %s\nLength is = %d", str2, len2);


}

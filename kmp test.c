#include<stdio.h>
#include<string.h>
int KMP(char str[100], char str2[100]);
int main()
{
char str[100], str2[100];
//	int len1, len2;
	printf("enter the string:");
	gets(str);
	printf("\nenter the string 2:");
	gets(str2);
	KMP(str, str2);
}

int KMP(char str[100], char str2[100])
{
	int len1, len2;
	len1 = strlen(str);
	printf("String is = %s\nLength is = %d", str, len1);
	len2 = strlen(str2);
	printf("String is = %s\nLength is = %d", str2, len2);
	
	
	
	
}

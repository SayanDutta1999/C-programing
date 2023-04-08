//print string using gtes and puts
#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string:");
	//scanf("%s", str); // here scanf function terminate after encounted by blank space
	scanf("%[^\n]s", str); // here [^\n] indicates that scanf() will keep receving charecter into str until \n is encouted
	//gets(str); // gets() function does not terminate
	puts("good morning");
	puts(str);
}

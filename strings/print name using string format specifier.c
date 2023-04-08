 //print string using %s format and using gets() and puts() function
#include<stdio.h>
int main()
{
	char name[100];
	printf("enter your name:");
	//scanf("%s", name); //this scanf will reciving multi word string
	scanf("%[^\n]s", name); // but this way scanf func reciving charecters umtil \n is encountered
	printf("\nhello %s", name);
//	gets(name);
//	puts("Good Evening");
//	puts(name);
	
	
	
	
}

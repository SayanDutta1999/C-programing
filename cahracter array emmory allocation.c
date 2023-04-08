#include<stdio.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = {'h', 'e', 'l', 'l', 'o'};
	printf("%p\n", sizeof(char));
	printf("%p\n", sizeof(arr));
	printf("%d\n", sizeof(char));
	printf("%d, %s\n", sizeof(arr), arr);
	printf("%d, %s\n", sizeof(arr1), arr1);
	printf("- - - -  - -  - \n");


	
}

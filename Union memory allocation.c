#include<stdio.h>
typedef union Demo{
	char c;
	char c1;
	short s;
	int i;
}demo;
int main()
{

	demo d1;

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(demo));
	printf("- - - - - - - - - -\n");
	printf("%p\n", &d1.c);
	printf("%p\n", &d1.c1);
	printf("%p\n", &d1.s); 
	printf("%p\n", &d1.i);
	//Union always allocate largest value of data type
	
	
			
}

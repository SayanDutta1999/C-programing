#include<stdio.h>
typedef struct Demo{
	char c;
    char d;
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
	printf("%p\n", &d1.c); 
	printf("%p\n", &d1.s);
	printf("%p\n", &d1.i);
	//static and dynamic file dll file
	
}

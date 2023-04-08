#include<stdio.h>

union Demo{
	
	int a;
	char b;
}demo;
int main()
{
  for(demo.a = 1; demo.a <= 1; demo.a++)
  {
  	printf("a = %d\n", demo.a);
  	printf("b = %c\n", demo.b);
  	printf("%p\n", sizeof(char));
  }

	
}

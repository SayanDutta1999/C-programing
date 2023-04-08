#include<stdio.h>
int main()
{
	int a=0;
	int *ptr1= &a;
/*	printf("value of a=%d\n",a);
	printf("address of a=%d\n",&a); //6487580
	printf("value of ptr=%d\n",ptr); //6487580
	printf("address of ptr=%d\n",&ptr); //6487568
	printf("value at ptr is pointing to =%d\n",*ptr); //0
	*ptr=10;
	printf("value at ptr is pointing to =%d\n",*ptr); //10 */
	
	
	int **ptr2= &ptr1;
	printf("value of a=%d\n",a);
	printf("address of a=%d\n",&a); //
	printf("value of ptr=%d\n",ptr2); //
	printf("address of ptr=%d\n",&ptr2); //
	printf("value at ptr is pointing to =%d\n",*ptr2); //
	
	
	
	
	
	
	
	
}



//Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
#include<stdio.h>
int main(void)
{
	printf("%d",test(1,2));
	printf("\n%d",test(2,2));
	
}
    test(int x,int y)
    {
	    return (x==y)?(x+y)*3 :(x+y);
    }

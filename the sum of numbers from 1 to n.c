//Write a program in C to calculate the sum of numbers from 1 to n using recursion
#include<stdio.h>
int main()
{
	int n, sum;
	printf("enter the number:");
	scanf("%d", &n);
	sum = num(n);
	printf("The sum of numbers from 1 to %d:%d", n, sum);
}

int num(int n){
	int res;
	if(n == 1){
		return 1;
	}
	else
	res = n + num(n - 1);
	return res;
}

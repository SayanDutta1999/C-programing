#include<stdio.h>
int main()
{
	int n, res;
	printf("enter the number:");
	scanf("%d", &n);
	res = fibo(n);
	printf("The fibonacci series  %d is: %d", n, res);
}

int fibo(int n){
	
	if(n <= 1){
		return 1;
	}
	return fibo(n - 2) + fibo(n - 1);
	 
}


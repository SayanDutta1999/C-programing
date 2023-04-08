//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d", &n);
	printf("The Natural numbers are:\n");
	num(n);
	printf("\n\n");
}

int num(int n){
	if(n <= 100){
		printf("%d\t", n);
	}
	num(n + 1);
}

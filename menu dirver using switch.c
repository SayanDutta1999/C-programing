// WAP to create menu driveing program using switch and infinite while loop
#include<stdio.h>

int fac(int n);
int PoN(int n);
int OoE(int n);
int main(){
	
	int n, option;
	do{
	
	printf("\n1.Factorial number:\n");
	printf("2.prime or not:\n");
	printf("3.Odd or Even:\n");
	printf("4.Exit\n");
	scanf("%d", &option);
	switch(option){
			case 1:
				printf("enter the value of n:");
				scanf("%d", &n);
				printf("%d\n", fac(n));
				break;
			case 2:
				printf("enter the value of n:");
				scanf("%d", &n);
				PoN(n);
				break;
			case 3:
				printf("enter the value of n:");
				scanf("%d", &n);
				OoE(n);
				break;
			default:
				printf("enter valid option\n");
			}
	}while(option != 4);
}

int fac(int n)
{
	if(n == 1){
		return 1;
	}
	else
	return n * fac(n - 1);
}

int PoN(int n){
	
	int prime = 1;
	
	for(int i = 2; i*i < n; i++)
	{
		if(n % i == 0)
		prime = 0;
	}
	if(prime)
	{
		printf("number is prime\n");
	}
	else
	printf("number is not prime\n");
}

int  OoE(int n){
	
	if(n % 2 == 0){
		printf("number is even\n");
	}
	else
	printf("number is odd\n");
}



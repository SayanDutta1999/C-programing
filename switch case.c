#include<stdio.h>
int main(){
	int option;
	printf("enter the option:");
	scanf("%d", &option);
	switch(option){
		case 1:
			printf("i am in street");
			break;
		case 2:
			printf("i am in home");
			break;
		default :
			printf("i am in default");
		
	}
	return 0;
}

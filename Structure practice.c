#include<stdio.h>
int main(){
	struct book{
		char *name;
		float price;
		int page;
	};
	
	struct book b1, b2, b3;
	
	printf("Enter the values");
	
	scanf("%s%f%d",&b1.name, &b1.price, &b1.page);
	scanf("%s%f%d",&b2.name, &b2.price, &b2.page);
	scanf("%s%f%d",&b3.name, &b3.price, &b3.page);
	
	printf("Values are");
	printf("Enter the details of book 1=%s%f%d",b1.name, b1.price, b1.page);
	printf("Enter the details of book 2= %s%f%d",b2.name, b2.price, b2.page);
	printf("Enter the details of book 2= %s%f%d",b3.name, b3.price, b3.page);

	

}

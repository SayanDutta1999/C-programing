//To delete a number from a given location in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n, pos;
	int *arr;
	
	
	
	printf("enter the value of n:");
	scanf("%d", &n);
	
	arr= (int*) malloc (n * sizeof(int));
	printf("\nenter the value of arr:");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the pos of the num is to be deleted:");
	scanf("%d", &pos);
	
	for(i = pos; i < n-1; i++)
	{
		arr[i] = arr[i++];
	}
	n--;
	
	printf("\nDeleted array is:");
	for(i = 0; i < n; i++)
	{
		printf("\n%d\a", arr[i]);
	}
}

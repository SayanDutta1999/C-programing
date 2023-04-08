//find smallest number form a array

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int smalllest(int arr[10], int n)
{
	int i = 0, small = arr[0];
	
	
	for(i = 1; i < n; i++)
	{
		if( small > arr[i])
		    small = arr[i];
		
	}
	return small;
}
int main()
{
	int size, n, arr[10];
	int i, smallnum;
	
	//printf("\nEnter the size of array:");
	//scanf("%d", &size);
	
	printf("\nEnter the number fo element in the array:");
	scanf("%d", &n);
	
//	arr = (int*) malloc (size * sizeof (int));
	printf("\nEnter the element in the array:");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Entered array is:");
	for(i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	
	smallnum = smalllest(arr, n);
	printf("\nSmallest number from the array is: %d", smallnum);
	
	
}



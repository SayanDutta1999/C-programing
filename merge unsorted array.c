//Merge two unsorted array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, n, index = 0;
	int *arr1, *arr2, arr3[20];
	
	
	
	printf("enter the value of n:");
	scanf("%d", &n);
	
	arr1= (int*) malloc (n * sizeof(int));
	printf("enter the value of arr1:");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	arr2= (int*) malloc (n * sizeof(int));
	printf("enter the value of arr2:");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	j = n + n;
	for(i = 0; i < n; i++)
	{
		arr3[index] = 	arr1[i];
		index++;
	}
	
	for(i = 0; i < n; i++)
	{
		arr3[index] = 	arr2[i];
		index++;
	}
	
	printf("Merged array is:");
	for(i = 0; i < j; i++)
	{
		printf("%d,", arr3[i]);
	}	
	
	return 0;
	
	
	
	
	
}


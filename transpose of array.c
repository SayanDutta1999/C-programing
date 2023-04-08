// write a program to transpose a 3 X 3 matrix
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, **arr, **arr2, n;
	
	printf("Enter the number of size of the array:");
	scanf("%d", &n);
	
	arr = (int **) malloc (n * sizeof(int *));
	arr2 = (int **) malloc (n * sizeof(int *));
	
	for(i = 0; i < n; i++)
	{
		arr[i] = (int *)malloc(n * sizeof(int));
		arr2[i] = (int *)malloc(n * sizeof(int));
	}	
	
	printf("Enter the value of array :");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("Enetered matrix is:\n");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		
	}
	
	printf("\nTranspose matrix is:");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
				arr2[i][j] = arr[j][i];
			
		}	
	}
	
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			printf("%d", arr2[i][j]);
		}
	}
}

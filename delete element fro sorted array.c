// delete element form sorted array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, n, num;
	int *arr;
	
	
	
	printf("enter the value of n:");
	scanf("%d", &n);
	
	arr= (int*) malloc (n * sizeof(int));
	printf("enter the value of arr:");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("enetr the element to be delete:");
	scanf("%d", &num);
	
	for(i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			for(j = i; j < n-1; j++)
			{
				arr[j] = arr[j+1];
				
			}
		}
		
	}
	n--;
	
	printf("\nDeleted array is:");
	for(i = 0; i < j; i++)
	{
		printf("\n%d\a", arr[i]);
	}	
	

}

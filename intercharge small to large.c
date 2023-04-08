// inter change smallest to largest

#include<stdio.h>
#include<stdlib.h>
void interchange(int*, int);
int lergest( int*, int);
int smallest(int*, int);
int main()
{
	int *arr, size, n;
	printf("\nEnter the size of array:");
	scanf("%d", &size);
	
	printf("\nEnter the number of element in the array: ");
	scanf("%d", &n);
	
	arr = (int*) malloc (size * sizeof(int));
	printf("\nEnter the element in the array:");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	interchange(arr, n);
	printf("The new array is:");
	for(int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	
	
}

int smallest( int *arr, int n)
{
	int i = 0, small = arr[0], pos = 0;
	for(i = 1; i < n; i++)
	{
		if(small > arr[i])
		{
			small = arr[i];
			pos = i;
		}
	}
	return pos;
}

int lergest( int *arr, int n)
{
	int i = 0, lerge = arr[0], pos = 0;
	for(i = 1; i < n; i++)
	{
		if(lerge < arr[i])
		{
			lerge = arr[i];
			pos = i;
		}
	}
	return pos;
}

void interchange(int *arr, int n)
{
	int temp, smpos, lgpos;
	smpos = smallest(arr, n);
	lgpos = lergest(arr, n);
	
	temp = arr[lgpos];
	arr[lgpos] = arr[smpos];
	arr[smpos] = temp;
	
}


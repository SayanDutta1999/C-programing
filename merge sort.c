#include<stdio.h>
#define max 100
void merge(int a[],int, int, int);
void merge_sort(int arr[],int, int);
void main()
{
	int arr[max],n,i;
	printf(" \nEnter the number of element in the array:");
	scanf("%d",&n);
	printf("enter elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	printf("the sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
	void merge_sort(int arr[],int lb, int ub)
{
		int mid;
		if(lb<ub)
		{
			mid=lb+ub/2;
			merge_sort(arr,lb,mid);
			merge_sort(arr,mid+1,ub);
			merge(arr,lb,mid,ub);
		}
}
void merge(int arr[],int lb, int mid, int ub)
{
	int i=lb,j=mid+1,b[max],k;
	while(i<=mid && j<=ub)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
    }
	else
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
		
	}
	for(k=lb;k<ub;k++)
	arr[k]=b[k];
}




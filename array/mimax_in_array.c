#include<stdio.h>
#include<stdlib.h>
struct pair maxmin(int *arr, int);
struct pair
{
    int min;
    int max;
};

struct pair maxmin(int *arr, int n)
{
    struct pair minmax;
    int size = n, i;
    // if there is only 1 element exists
    if (size == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    // if there is more than one element exists
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    
    for ( i = 2; i < size; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        
    }
    return minmax;
    
}


int main()
{
    int arr[10], i, n;
    printf("Enter the number of element of the array:");
    scanf("%d", &n);
    int lenght = sizeof(arr) / sizeof(arr[0]);
    for( i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    struct pair minmax =  maxmin(arr, n);
    printf("\nMinimum element is %d", minmax.min);
    printf("\nMaximum element is %d", minmax.max);
    return 0;
}
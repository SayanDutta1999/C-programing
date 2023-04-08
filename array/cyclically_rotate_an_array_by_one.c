#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[], int n);

void rotate(int arr[], int n)
{
    int X = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = X;
    
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10}, n, i;
    n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Given array is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    rotate(arr, n);

    printf("\nRotated array is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}



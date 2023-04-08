#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, mid, low, high, found = 0, n, num, i;
    printf("Enter the number the element of the array:-");

    scanf("%d", &n);
    arr = (int *) malloc (n * sizeof (int));
    printf("Enter values into the array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number that has to be searched:-");
    scanf("%d", &num);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) * (( num - arr[low]) / (arr[high] - arr[low] ));
        if (arr[mid] == num)
        {
            printf("%d is present at the position %d", num, mid);
            found = 1;
            break;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        
        
        
        
    }
    if (mid == - 1)
    {
        printf("%d is not found in the array.", num);
    }
    
    free(arr);
    arr = NULL;
    
    return 0;
}
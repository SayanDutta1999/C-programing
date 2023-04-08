#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, i, n, num, low = 0, high = 1, mid, found = 0; 
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
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            printf("%d is present in the arrray at the position %d", num, mid);
            found = 1;
            break;
        }
        if (arr[low] < arr[mid])
        {
            if (num > arr[low] && num < arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
                
        else
            if (num > arr[mid] && num <= arr[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
    }
    if (low > high && found == 0)
    {
        printf("Number does not exit in the array");
    }
    free(arr);
    arr = NULL;
    return 0;
}
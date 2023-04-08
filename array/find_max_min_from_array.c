#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, i, n;
    printf("Enter the number  of element in the array:");
    scanf("%d", &n);
    arr = (int *) malloc (n * sizeof(int));
    printf("Enter element in the array:");
    for( i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    int min = arr[0], max = arr[0];
    printf("\nMAXIMUM and MINMUM:\n");
    for ( i = 0; i < n; i++)
    {
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    printf("minimum element is %d", min);
    printf("\n");
    printf("maximum element is %d", max);
    
    
    return 0;
}
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
    printf("\nNow reversed array is:\n");
    for ( i = n - 1; i >= 0; --i)
    {
        
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}
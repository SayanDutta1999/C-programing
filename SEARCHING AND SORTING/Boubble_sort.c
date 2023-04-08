//Bubble Sort
#include<stdio.h>
#include<stdlib.h>
void bobble_sort(int arr[], int );
int main()
{
    int arr[] = {1, 5, 8, 6, 7, 3, 4, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    bobble_sort(arr, length);
    return 0;
}

void bobble_sort(int arr[], int length){
    int i, j;
    for ( i = 0; i < length; i++ )
    {
        // this loop control the the swap function
        for( j = 0;  j < length - i - 1; j++ ){
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
    printf("Sorted array is:\n");
    for ( i = 0; i < length; i++ )
    {
        printf("%d\t", arr[i]);
    }
}

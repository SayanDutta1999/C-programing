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

void bobble_sort(int arr[], int n){
    int temp;
    for(int i = n - 1; i >= 0; i--){
        int didswap = 0;
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    { 
        printf("%d\t", arr[i]);
    }
}
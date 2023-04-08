#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[], int);
int main()
{
    int arr[] = {1, 5, 8, 6, 7, 3, 4, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, length);
    printf("Sorted Array is\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void insertion_sort(int arr[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}
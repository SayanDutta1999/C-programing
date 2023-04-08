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

void insertion_sort(int arr[], int length){
    for (int i = 1; i < length; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        

    }
    
}
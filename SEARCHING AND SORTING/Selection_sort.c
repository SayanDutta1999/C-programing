#include<stdio.h>
#include<stdlib.h>
void selection_sort(int arr[], int);
int smallest(int arr[], int, int);
int main()
{
    int arr[] = {1, 5, 8, 6, 7, 3, 4, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, length);
    printf("Sorted Array is\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
int smallest(int arr[], int k, int length){
    int pos = k, small = arr[k]; 
    for (int  i = k + 1; i < length; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
        
    }
    return pos;
    
}
void selection_sort(int arr[], int length){
    int pos, temp;
    for (int i = 0; i < length; i++)
    {
        pos = smallest(arr, i, length);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    
}
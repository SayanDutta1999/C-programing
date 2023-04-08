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

void selection_sort(int arr[], int n){
    int temp;
    for(int i = 0; i <= n - 2; i++){
        int mini = i;
        for(int j = i; j <= n - 1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        temp = arr[mini];
        arr[mini] =arr[i];
        arr[i] = temp;
    }
}

// Dutch flag algo
#include<stdio.h>
#include<stdlib.h>
void swap(int* , int*);
void printarray(int arr[], int);

void sort012(int arr[], int length)
{
    int low = 0;
    int mid = 0;
    int high = length - 1;
    while (mid <= high){
        switch (arr[mid]){
        case 0:
            swap(&arr[low++], &arr[mid]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&arr[mid], &arr[high--]);
            break;
        }

    }
    
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarray(int arr[], int length){
     for (int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}
int main()
{
    int length, i;
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    length = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, length);
    printf("Array is:\n");
    printarray(arr, length);
    getchar();
    return 0;
}
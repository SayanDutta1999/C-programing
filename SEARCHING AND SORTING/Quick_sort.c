#include<Stdio.h>
void quickSort(int *, int, int);
int partition(int *, int, int);
void swap(int *, int *);
int main(){
    int arr[] = {1, 6, 5, 8, 4, 3, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len - 1);
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void quickSort(int *arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int partition(int *arr, int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i < j){
        while(arr[i] <= pivot && i <= high -1){
            i++;
        }

         while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j){
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void swap(int *p, int *q){
    int tmp;
    tmp = *p; 
    *p=*q;   
    *q=tmp;
} 
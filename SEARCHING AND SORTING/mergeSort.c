#include<Stdio.h>
void margeSort(int *, int, int);
void marge(int *, int, int, int);
int main(){
    int arr[] = {1, 6, 5, 8, 4, 3, 7};
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]);

    margeSort(arr, low, high - 1);
     for(int i = 0; i < high; i++){
        printf("%d\t", arr[i]);
    }
    
    return 0;
}

void margeSort(int arr[], int low, int high){
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        margeSort(arr, low, mid);
        margeSort(arr, mid + 1, high);
        marge(arr, mid, low, high);
    }
        
}

void marge(int arr[], int mid, int left, int right){
    int temp[1000];
    int i = left;
    int j = mid + 1;
    int index = left;

    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[index] = arr[i];
            i++;
        }
        else{
            temp[index] = arr[j];
            j++;
        }
        index++;
        

    }
    if(i > mid){
            while(j <= right){
                temp[index] = arr[j];
                index++;
                j++;
        }
    }
    else{
        while(i <= mid){
            temp[index] = arr[i];
            index++;
            i++;
        }
    }
    
    for(int i =  left; i < index; i++){
        arr[i] = temp[i];
    }
    

}
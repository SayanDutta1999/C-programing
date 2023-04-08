#include<stdio.h>
#include<stdlib.h>
void merge(int arr1[], int, int arr2[], int);
int main()
{

    int arr1[] = {1, 5, 9, 10, 15, 20}, arr2[] = {2, 3, 8, 13 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, size1, arr2, size2);
    return 0;
}

void merge(int arr1[], int size1, int arr2[], int size2){
    int i, j,  index;
  
    
    
}
#include<stdio.h>
#include<stdlib.h>
int sumOfElement(int *arr, int *len); // int* arr and int arr[] are same.
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sum is : %d",sumOfElement(arr, &len)); // arr can be used as &arr[0].
    return 0;
}

int sumOfElement(int *arr, int *len){ // Here arr passed to this method from main methos as a call by reference. its a pointer to int variable
    int sum = 0;

    for(int i = 0; i < *len; i++){
        sum += arr[i]; // arr[i] is same as *(arr + i)
    }
    return sum;
}
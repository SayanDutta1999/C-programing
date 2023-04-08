#include<stdio.h>
#include<stdlib.h>
void rearrange(int arr[], int n);
void printArray(int arr[], int n);

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0){
            if(i != j){
                int temp = arr[i];
                arr[i] = arr[j];
                 arr[j] = temp;
            }
            j++;
        }
    }
}



void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[10], i, n;
    printf("Enter the number  of element in the array:");
    scanf("%d", &n);
    printf("Enter element in the array:");
    for( i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}


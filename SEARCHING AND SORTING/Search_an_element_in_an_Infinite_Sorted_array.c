#include<stdio.h>
#include<stdlib.h>
void infinteSortedArray(int arr[], int);
void binarySearch(int arr[], int , int, int);
int main()
{
    int *arr, i, n, num; 
    printf("Enter the number the element of the array:-");

    scanf("%d", &n);
    arr = (int *) malloc (n * sizeof (int));
    printf("Enter values into the array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Enter the number that has to be searched:-");
    scanf("%d", &num);
    infinteSortedArray(arr, num);
    return 0;
}
void infinteSortedArray(int *arr, int num){
    int  low = 0, high = 1;
    while (arr[high] < num)
    {
        low = high;
        high = 2 * high;
    }
    binarySearch(arr, num, low, high);
}

void binarySearch(int arr[], int num, int low, int high){
    int mid, found =0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            printf("%d is present in the arrray at the position %d", num, mid);
            found = 1;
            break;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        
    }
    
    if (low > high && found == 0)
    {
        printf("Number does not exit in the array");
    }

}

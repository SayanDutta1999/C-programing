// C program to sort an array with 0, 1 and 2
// in a single pass
#include <stdio.h>
 void printArray(int arr[], int lenght);
/* Function to swap *a and *b */
void swap(int* a, int* b);
 
// Sort the input array, the array is assumed to
// have values in {0, 1, 2}
void sort012(int arr[], int length)
{
    int low = 0;
    int high = length - 1;
    int mid = 0;
 
    while (mid <= high) {
        switch (arr[mid]) {
        case 0:
            swap(&arr[low++], &arr[mid++]);
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
 
/* UTILITY FUNCTIONS */
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
/* Utility function to print array arr[] */
void printArray(int arr[], int lenght)
{
    int i;
    for (i = 0; i < lenght; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
/* driver program to test */
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int i;
 
    sort012(arr, length);
 
    printf("array after segregation ");
    printArray(arr, length);
 
    getchar();
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
void printUnion(int arr[], int arr2[], int n, int m);

void printUnion(int arr[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while ((i < n) && (j < m))
    {
        if (arr[i] < arr2[j])
        {
            printf("%d\t", arr[i++]);
        }
        else if (arr2[j] < arr[i])
        {
            printf("%d\t", arr2[j++]);
        }
        else
        {
            printf("%d\t", arr2[j++]);
            i++;
        }
    }
    while (i < n)
    {
        printf("%d\t", arr[i++]);
    }

    while (i < m)
    {
        printf("%d\t", arr2[j++]);
    }
    
    
}
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7}, n, m;
    
    n = sizeof(arr1) / sizeof(arr1[0]);
    m = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, n, m);
    return 0;
}
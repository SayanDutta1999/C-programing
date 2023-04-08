#include<stdio.h>
#include<stdlib.h>
void print_NGN(int *arr, int);
int main()
{
    int n, *arr;
    printf("Enter the number of element in Array:");
    scanf("%d", &n);
    arr =(int *)malloc(n * sizeof(int));
    printf("Enter element in array:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_NGN(arr, n);
    return 0;
}

void print_NGN(int *arr, int n)
{
    int next, i, j;
    for ( i = 0; i < n; i++)
    {
       next = -1;
       for(j = i + 1; j < n; j++)
       {
           if (arr[i] < arr[j])
           {
                next = arr[j];
                break;
                
           }
           
       }
       printf("%d -- %d\n", arr[i], next);
    }
    
}

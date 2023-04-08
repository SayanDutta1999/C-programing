#include<stdio.h>
#include<stdlib.h>
// Callback function should compare two integers, should retrun 1 if first element has 
// higher rank, 0 if element are equal to -1 if second element has higher rank.
int compare(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    else return -1;
}
void boubleSort(int *A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(compare(A[j], A[j + 1]) > 0){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4};
    boubleSort(A, 6, compare);
    for ( i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}
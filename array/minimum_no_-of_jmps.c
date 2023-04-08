#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int jump(int arr[] , int N);
int min(int, int);
int main()
{
    int N = 11, arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    jump(arr, size);
    return 0;
}

int min (int x, int y){
    return  (x < y) ? x : y; 
}



int jump(int arr[] , int N){
    int jumpCount, i, j;
     
    if (arr[i] == 0)
        {
            return INT_MAX;
        }
        else if(arr[i] != N){
            return -1;
    
        }
    for ( i = 0; i <= N - 1; i++)
    {
       
        
    }
    
}


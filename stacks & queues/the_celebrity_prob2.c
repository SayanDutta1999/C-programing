/*
A celebrity is a person who is known to all but does not know anyone at a party. 
If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that 
if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.

Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0}, 
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity. 
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int M(int **arr, int n);
int main()
{
    int n, **arr, i, j;
    printf("Enter the number of n:");
    scanf("%d", &n);
    arr =(int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i] =(int *)malloc(n * sizeof(int));
        }
        
    }
    printf("Enter element in array\n");
    for (i = 0; i < n; i++)
    {
        printf("enter %dth row:", i);
        for (j = 0; j < n; j++)
        {
            
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", M(arr, n));
    
    
    return 0;
}

int M(int **arr, int n)
{
    int indeg[MAX] = {0}, outdeg[MAX] = {0};
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; i < n; j++)
        {
            if (arr[i][j] == 1) // if i knows j
            {
                indeg[j++];
                outdeg[i++];
            }
            
        }
        
    }
    for(i = 0; i < n; i++)
    {
        if (arr[i] == n - 1 && arr[j] == 0)
        {
            return 1;
        }
        return -1;
            
        
    }
    
    
}
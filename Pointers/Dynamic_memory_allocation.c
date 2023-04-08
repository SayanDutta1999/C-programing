#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    printf("Enter value of N:-");
    scanf("%d", &n);
    
    //MALLOC
    // int *A = (int *) malloc(n * sizeof(int));
    
    // CALLOC
    int *A = (int *) calloc(n, sizeof(int));
    for(i = 0; i < n; i++){
        A[i] = i + 1;
    }
    // free(A); // After frre A memory we can still can change value of array at that memory block, its to dangerous.
   // A = NULL; // After free always adjust pointer to NULL.

    //REALLOC
    // int* B = (int*) realloc(A, (2 * n) * sizeof(int));
    
    int* B = (int*) realloc(A, 0); // Equivalent as a free(A).
    
    //int* B = (int*) realloc(NULL, n * sizeof(int)); // Equivalent as malloc

    for(i = 0; i < (2 * n); i++){
        printf(" %d", B[i]);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[2][3] = {2, 3, 6, 4, 5, 8};
    printf("%d\n", arr); // Return base address
    printf("%d\n", arr[0]); // Return base address
    printf("%d\n", &arr[0][0]); // Return base address
    printf("%d\n", *(arr)); // Return base address
    
    printf("\n"); 

    printf("%d\n", (arr + 1)); // Second row base  element base address.
    printf("%d\n", &arr[1]); // Second row base  element base address.
    printf("%d\n", &arr[1][0]); // Second row base  element base address.
    printf("%d\n", *(arr + 1)); // Second row base  element base address.
    printf("%d\n", arr[1]); // Second row base  element base address.

    printf("\n");

    printf("%d\n", *(*(arr + 1))); // return valu at position arr[1][0].
    
    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d", *(arr[i] + j));
            
        }
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d", *(*(arr + i) + j));

        }
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int arr[] = {2, 4, 5, 8, 1};
    p = arr;

    // p++; this is valid
    // arr++; this is not valid.

    printf("\n");

    printf("Base address of arr is : %d\n", p);

    printf("\n");

    printf("PRINT ADDRESS OF ARRAY ELEMENT\n");

    printf("\n");

    printf("arr[0] address of arr is : %d\n", arr); // Using only array name we can get the base address fo that array.
    for(int j = 1; j <= 4; j++)
        printf("arr[%d] address of arr is : %d\n", j, arr + j); // Print address
   
    printf("\n");
    
    for(int j = 0; j <= 4; j++)
        printf("arr[%d] address of arr is : %d\n", j, &arr[j]); // Print address
    
    
    // printf("arr[2] address of arr is : %d\n", arr + 2);
    // printf("arr[3] address of arr is : %d\n", arr + 3);
    // printf("arr[4] address of arr is : %d\n", arr + 4);

    printf("\n");

    printf("PRINT VALUES OF ARRAY ELEMENT\n");

    printf("\n");
    
    for(int j = 0; j <= 4; j++)
        printf("arr[%d] value in arr is : %d\n", j, arr[j]);

    printf("\n");
    
    for(int i = 0; i <= 4; i++)
        printf("arr[%d] value in arr is: %d\n", i, *(arr + i));
    
    printf("\n");
    
    return 0;
}
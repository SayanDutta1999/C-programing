//Write a C program to create a new array containing the middle elements from the two given arrays of integers, each length 5
#include <stdio.h>
#include <stdlib.h>

print_array(int parray[], int size)
  {
   int i;      
   for( i=0; i<size-1; i++)  
    {  
        printf("%d, ", parray[i]);  
    } 
   printf("%d ", parray[i]);  
   printf("\n");   
}
int main()
{ 
    int arr_size;
    int a1[] = {10, 20, -30, -40, 30 };
    int a2[] = {10, 20, 30, 40, 30};
    int arr_size1 = sizeof(a1)/sizeof(a1[0]);
    int arr_size2 = sizeof(a2)/sizeof(a2[0]);
    printf("Elements in original array are:\n");  
    print_array(a1, arr_size1);
    print_array(a2, arr_size2);  
    int result[] = { a1[2], a2[2]  }; //take middle element from a1 and a2 arrray and make a result array form this.
    arr_size = sizeof(result)/sizeof(result[0]);
    printf("Elements in new array are: ");  
    print_array(result, arr_size);
}     
 
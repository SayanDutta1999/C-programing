#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 5;
    int *p = &a;
    // *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("\n");
    
    printf("Pointer p stores address of a:  %p\n", p); // address of a 6422296
    printf("The value at the address *p pointing to a is:  %d\n", *p); // 5
    
    printf("\n");
    
    printf("Pointer q address of pointer p: %p\n", q); // address of *p 6422292
    printf("The value at the address **q pointing to *p is:   %d\n", *(*q)); // 5
    printf("*q prints the value of p:  %d\n", *q); //  Print the store value of p
    
    printf("\n");

    printf("Pointer r stores the address of q:  %p\n", r); // address of **q 6422296
    printf("The value at the address ***r pointing to **q is: %d\n", *(**r)); // 5
    printf("*r prints the value of q:  %d\n", *r); //  print the store value of  q
    printf("**r prints the value of p:  %d\n", *(*r)); // print store value of  p
    printf("***r prints the value of a:  %d\n", *(*(*r))); // 5
    
    printf("\n");
    /* OPERATION WITH POINTER TO POINTER */

    **q = *p + 2;
    printf("After Dereferencing the value of a is: %d\n", a); // 7
    
    printf("\n");

    ***r = **q + 3;
     printf("After Dereferencing the value of a is: %d\n", a); // 10
    printf("\n");
    return 0;
}
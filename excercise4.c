// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(1 < n &&  n < 10)
    {
        printf("1");
    }
    
    return 0;
}
// Write a C program to get the absolute difference between n and 51. 
//If n is greater than 51 return triple the absolute difference.

#include<stdio.h>
#include<stdlib.h>
int diff(int n)
{
    int x = 51;
    if(n > x)
    {
        return  (abs(n) - abs(x)) * 3;
    }
    else{
      return  abs(x) - abs(n);
    }
}
int main()
{
    int n, b;
    printf("%d",  diff(53));
    printf("\n%d", diff(30));
    printf("\n%d", diff(51));
    return 0;
}

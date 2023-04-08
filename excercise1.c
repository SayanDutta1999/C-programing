// 1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, sum;
    scanf("%d", &a);
    scanf("\n%d", &b);
    if(a == b)
    {
        sum = (a + b) * 3;
    }
    else
    {
        sum = a + b;
    }
    printf("Sum is:%d", sum);
    return 0;
}
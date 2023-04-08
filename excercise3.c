// Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("\n%d", &b);
    int sum = (a + b);
    if(a == 30 || sum == 30)
    {
        printf("1");
    }
    else
    {
       printf("0");
    }

    return 0;
}
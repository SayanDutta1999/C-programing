// 5. Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 3 == 0 || n % 7 == 0)
    {
        printf("1");
    }
    return 0;
}
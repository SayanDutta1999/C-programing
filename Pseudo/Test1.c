#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number[] = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    int len = sizeof(number) / sizeof(number[0]);
    int start = number[0]; 
    int end = number[len - 1];
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n;
    printf("Test Data:");
    scanf("%d", &n);
    if(n >= 0)
    {
        printf("Entered number  is a positive number");
    }
    else
    {
        printf("Entered number  is a negative number");
    }
    return 0;
}
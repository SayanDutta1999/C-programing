// 6. Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("\n%d", &m);
    if(n < 0 && m > 100)
    {
        printf("1");
    }
    else if((m < 0 && n > 100))
    {
         printf("0");
    }

    return 0;
}
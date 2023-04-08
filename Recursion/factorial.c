#include<stdio.h>
#include<stdlib.h>
int fac(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int res = fac(n);
    printf("Result: %d", res);
    return 0;
}
int fac(int x)
{
    if(x == 1)
        return 1;
    else
        return(x * fac(x - 1));
}
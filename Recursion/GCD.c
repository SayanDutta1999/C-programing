#include<stdio.h>
#include<stdlib.h>
int gcd(int, int);
int main()
{
    int num1, num2, res;
    printf("Enter the two numbers:");
    scanf("%d %d", &num1, &num2);
    res = gcd(num1, num2);
    printf("\nResult is: %d", res);
    return 0;
}
int gcd(int x, int y)
{
    int rem = x%y;
    if (rem == 0)
    {
        return y;
    }
    else
    {
        return(gcd(y, rem));
    }
    
}
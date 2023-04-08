#include<stdio.h>
#include<stdlib.h>
int fib(int);
int main()
{
    int fibo, res;
    printf("Enter the value of fibo:");
    scanf("%d", &fibo);
    
    printf("\n");
    for (int i = 0; i < fibo; i++)
    {
        res = fib(i);
        printf("%d\t", res);
    }
    
    
    return 0;
}
int fib(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
        return (fib(x -1) + fib(x - 2));
    
    
}
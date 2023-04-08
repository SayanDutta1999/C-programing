#include<stdio.h>
#include<stdlib.h>
int ex_po(int, int);
int main()
{
    int num1, num2;
    printf("Enter the value of two number:");
    scanf("%d %d", &num1, &num2);
    int res = ex_po(num1, num2);
    printf("Result: %d", res);
    return 0;
}
int ex_po(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return (x * ex_po(x, y - 1));
    }
    
}
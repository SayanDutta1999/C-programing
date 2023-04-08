#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, m, b;
    printf("Enter numbers:");
    scanf("%d %d %d", &n, &m, &b);
    printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d", n, m, b);
    if((n > m) && (n > b))
    {
        printf("\nThe 1st Number is the greatest among three");
    }
    else  if((m > n) && (m > b))
    {
        printf("\nThe 2nd Number is the greatest among three");
    }
    else
    {
        printf("\nThe 3rd Number is the greatest among three");
    }
    return 0;
}
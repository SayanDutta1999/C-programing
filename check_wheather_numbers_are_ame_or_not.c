#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, m;
    printf("Test Data:");
    scanf("%d %d", &n, &m);
    if(n == m)
    {
        printf("Number1 and Number2 are equal");
    }
    else
    {
        printf("Number1 and Number2 are not equal");
    }
    return 0;
}
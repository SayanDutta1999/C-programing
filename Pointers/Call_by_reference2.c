#include<stdio.h>

int i;

void foo(int n)
{
    if(n > 2)
        return;

    printf("From foo &n = %d\n", &n);
    printf("From foo &i = %d\n", &i);

    foo(n+1);
}


int main()
{
    printf("&i = %d\n", &i);
    foo(0);
    return 0;
}
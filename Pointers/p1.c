#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 12, b = 20;
    int *p;
    printf("Address of p %d\n", &p);
    p = &a; // &a -> Address of a
    printf("Size of p is %d\n", sizeof(int)); // 4
    printf("Address of a is %d or %d\n", p, &a); // 6422300 is the base address
    printf("Address of a after increment is %d\n", p + 1); // here + 1 means it takes inetegr size in memory 6422308
    a = 12;
    printf("Value of a is %d or %d\n", a, *p); // *p - values at address pointed by p.
    *p = 90;
    printf("Value of a *p is %d\n ", *p);
    *p = b;
    printf("Value of a *p is %d\n ", *p);
    p = &b;
    printf("Value of a p is %d\n ", &p);
    printf("value at address p + 1 %d\n", *(p) + 1);

    return 0;
}
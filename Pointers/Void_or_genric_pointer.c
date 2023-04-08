#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    void *p0;
    p0 = p;
    printf("Address = %d", p0); // here we can't use derefereceing because its not mapped to any datatype.
    // And we can't operate any arithmetic operation on void or null pointer.
    return 0;
}
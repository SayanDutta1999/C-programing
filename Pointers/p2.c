#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d\n", sizeof(int)); // --> 4
    printf("Size of p is %d\n", sizeof(p)); // --> 4
    printf("Size of p is %d\n", sizeof(*p)); // --> 4
    printf("Address = %d, value = %d\n", p, *p);
    *p = *(p) + 1;
    printf("Address = %d, value = %d", p + 1, *(p));
    char *p0;
    p0 = (char*) p; // Typecasting
    printf("\nSize of char is %d\n", sizeof(char));
    printf("Address = %d, value = %d", p0, *p0); /* value is 1 because when pointer points to the base address it only takes 1 byte and its becoz it is char which is  byte*/
    // 1025 = 00000000 00000000 00000100 00000001 -> take 1 first byte from it
    return 0;
}
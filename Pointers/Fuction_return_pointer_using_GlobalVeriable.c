#include<stdio.h>
#include<stdlib.h>
int c;
void printWorld()
{
    printf("Hello World\n");
}
int *add(int *a, int *b)
{
    c = (*a + *b);
    return &c;
}
int main()
{
    int a = 8, b = 5;
    int *sum= add(&a, &b);
    printWorld();
    printf("Sum is:- %d", *sum);
    return 0;
}
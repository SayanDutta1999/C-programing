#include<stdio.h>
#include<stdlib.h>
void printWorld()
{
    printf("Hello World\n");
}
int *add(int *a, int *b, int *c)
{
    *c = (*a + *b);
    return c;
}
int main()
{
    int a = 8, b = 5;
    int *sum = (int *) malloc (sizeof(int));
    sum = add(&a, &b, sum);
    printWorld();
    printf("Sum is:- %d", *sum);
    return 0;
}
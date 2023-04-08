#include<stdio.h>
#include<stdlib.h>
void A()
{
    printf("Hello World\n");
}
void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that "ptr" points to
    (*ptr)();
}
int main()
{
    void (*ptr)();
    ptr = A;
    B(ptr);// A is fucntion callback function.
    B(A); // A is fucntion callback function.

    return 0;
}
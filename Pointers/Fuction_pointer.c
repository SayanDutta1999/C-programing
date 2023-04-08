#include<stdio.h>
#include<stdlib.h>
int print()
{
    printf("hello world\n");
}
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    // Pointer to function  that should take
    // (int, int) as argument/parameter and return int.
    int c, d;
    int (*p)(int, int);
    int (*a)();
    p = add;
    a = print;
    c = (*p)(2, 3); // De - referncing and executing the  function
    (*a)(); // Calling fucntion print
    // a(); like this also we can call a function as using fuction pointer.
    printf("%d", c);
    return 0;
}
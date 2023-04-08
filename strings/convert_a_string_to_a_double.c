#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[] = "8.00 2.00";
    char *ptr;
    double x, y;
    x = strtod(str, &ptr);
    y = strtod(ptr, NULL);
    printf ("\nOutput= %.2lf\n\n", x/y);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[] = "2016 40a0b0 -1101110100110111100110 0x5abfff";
    char *end_ptr;
    long int a, b, c, d;
    a = strtoul(str, &end_ptr, 10);
    b = strtoul(str, &end_ptr, 16);
    c = strtoul(str, &end_ptr, 2);
    d = strtoul(str, &end_ptr, 0);
    printf ("\nIn decimals: %ld, %ld, %ld, %ld.\n\n", a, b, c, d);
    return 0;
}
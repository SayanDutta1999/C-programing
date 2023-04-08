#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr = "Hello World!";
    printf("%.5s\n", ptr); // here %.ns use for writing a part of string where n is the number of cahracters
    /*  "%m.ns" is used to print just a part of the string  where n is the number of cahracters
     to be displayed and m denotes the size of the field within which the string will be displayed */
    printf("%6.5s\n", ptr);
    // puts() add a nerline after wrinting the string on output screen 
    puts(ptr);
    puts(ptr);
    return 0;
}
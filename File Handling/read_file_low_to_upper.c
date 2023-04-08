#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *ptr;  //  define a pointer to predefined structure type FILE
    char c;
    /* open a new data file for writing only */
    ptr = fopen("sample.txt", 'W');
    /* read each character and write its uppercase equivalent to the data file */ 
    do{
        putc(toupper(c = getchar()), ptr);
    }
    while( c != '\0');
    /* close the data file */
    fclose(ptr);
    return 0;
}
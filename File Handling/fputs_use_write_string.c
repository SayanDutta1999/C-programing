/*
Writing File : fputs() function
The fputs() function writes a line of characters into file. It outputs string to a stream.

Syntax:

int fputs(const char *s, FILE *stream)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("string.txt", "w+");
    fputs("My name is sayan dutta", fp);
    fclose(fp);
    return 0;
}
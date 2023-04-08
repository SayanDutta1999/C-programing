/*
The fprintf() function is used to write set of characters into file. It sends formatted output to a stream.

int fprintf(FILE *stream, const char *format [, argument, ...])
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{  
    FILE *ptr;
    ptr = fopen("sample.txt", "w"); //opening file  

    fprintf(ptr,"Sayan Dutta"); //writing data into file 
    fclose(ptr); //closing file
    return 0;
}
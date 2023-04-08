/*
The fputc() function is used to write a single character into file. It outputs a character to a stream.

Syntax:

int fputc(int c, FILE *stream)
*/
#include <stdio.h>  
#include<stdlib.h>
int main(){  
   FILE *fp;  
   fp = fopen("file1.txt", "w+");//opening file  
   fputc('a',fp);//writing single character into file  
   fclose(fp);//closing file  
}
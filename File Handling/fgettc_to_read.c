/*
The fgetc() function returns a single character from the file. It gets a character from the stream. It returns EOF at the end of file.

Syntax:

int fgetc(FILE *stream)
*/
#include<stdio.h>  
#include<stdlib.h>  
int main(){  
    FILE *fp;  
    char c;    
    fp=fopen("file1.txt","r");  
  
    while((c=fgetc(fp))!=EOF)
    {  
    printf("%c",c);  
    }  
    fclose(fp);  
  
}
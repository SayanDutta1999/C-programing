/*
The fscanf() function is used to read set of characters from file. 
It reads a word from the file and returns EOF at the end of file.
int fscanf(FILE *stream, const char *format [, argument, ...])  
*/
#include<stdio.h>
#include<stdlib.h>
  
int main(){  
   FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("sample.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s", buff );  
   }  
   fclose(fp);  
}  
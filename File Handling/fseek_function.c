/*
The fseek() function is used to set the file pointer to the specified offset. It is used to write data into file at desired location.

Syntax:

int fseek(FILE *stream, long int offset, int whence)  
There are 3 constants used in the fseek() function for whence: SEEK_SET, SEEK_CUR and SEEK_END

*/

#include <stdio.h>  
#include<stdlib.h>
int main(){  
   FILE *fp;  
  
   fp = fopen("myfile.txt","w+");  
   fputs("This is javatpoint", fp);  
    
   fseek( fp, 7, SEEK_SET );  
   fputs(" Sayan Dutta", fp);  
   fclose(fp);  
}
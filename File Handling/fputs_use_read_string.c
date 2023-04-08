/*
The fgets() function reads a line of characters from file. It gets string from a stream.

Syntax:

char* fgets(char *s, int n, FILE *stream) 
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char text[300];
    fp = fopen("empdetails.txt", "r");
    for(int i = 0; i < 3; i++)
    {
        //puts(fgets(text, 100, fp));
        printf("%s", fgets(text, 100, fp));
    }
    
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    /* here actually goes under the infinite
    for preventing this with had to add 
    a new line char fflush(stdout) */
     printf("hello world"); 
     //fflush(stdout);
     while (1 == 1);
    
     
     return 0;
}
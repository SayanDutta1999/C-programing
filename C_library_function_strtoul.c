//C library function - strtoul()

//Return Value
//This function returns the converted integral number as a long int value. If no valid conversion could be performed, a zero value is returned.

#include <stdio.h>
#include <stdlib.h>

int main () 
{
   char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);
   printf("The number unsigned long integer is %lu\n", ret);
   printf("String part is |%s|", ptr);

   return(0);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    // ptr = fopen("mylist.txt", "r");
   
    
    
    // char c = getc(ptr);
    // printf("The character is :%c\n", c);
    // char c1 = getc(ptr);
    // printf("The character is :%c\n", c1);
    // ptr1 = fopen("mylist.txt", "r+");
    // ptr1 = fopen("mylist.txt", "w+");
    ptr1 = fopen("mylist.txt", "r+");
    // fputc('S', ptr1);
    // fputs("ayan dutta", ptr1);
   

    char str[30];
    fgets(str, 12, ptr1);
    printf("The character is :%s\n", str);
    // printf("The string address is :%p", &str);
    
    fclose(ptr1);
    fclose(ptr);
    
   return 0;
}
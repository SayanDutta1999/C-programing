#include<stdio.h>
#include<stdlib.h>
void printString(char *arr){
    while(*arr != '\0'){
        printf("%c", *arr);
        arr++;
    }
}
int main()
{
    char arr[] = "hello"; // String get stored in the for array.
    // char *c = "hello"; // String get stored  as compile time contant
    // c[0] - 'A';  Return an error.
    printf("%d\n", arr); // Return base address of array
    printf("%c\n", arr[0]); // Return base address of array
    printString((arr));
    return 0;
}
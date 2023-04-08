#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[5], arr1[] = "John";
    arr[0] = 'J';
    arr[1] = 'o';
    arr[2] = 'h';
    arr[3] = 'n';
    arr[4] = '\0';
    int len = strlen(arr);
    int len1 = strlen(arr1);
    printf("%d\n", len);
    printf("%s\n", arr);
    printf("%d\n", len1);
    printf("%s", arr1);
    return 0;
}
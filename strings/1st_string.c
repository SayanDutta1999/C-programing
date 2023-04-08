#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[5] = "hello";
    char S[5] = {'h', 'e', 'l', 'l', 'o'};
    printf("%s\n", S);
    printf("%s", s);
    s[0] = 'M'; // here i change 0th index character 'h' to 'M'.
     printf("\n%s", s);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int Input(char str[100], int);
int main()
{
    char str[10];
    int n;
    n = Input(str, 5);
    printf("%d %s", n, str);
    return 0;
}

int Input(char str[100], int n)
{
    int i;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
    
}
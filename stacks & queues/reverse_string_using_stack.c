#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void push(char);
void pop();
struct stack
{
    int top;
    char stk[MAX];
}s;

void push(char str)
{
    if (s.top == MAX -1)
    {
        printf("Stack is OVERFLOW!\n");
    }
    else
    {
        s.top++;
        s.stk[s.top] = str;
    }
    
}

void pop()
{
    if (s.top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        // Pop (Removing element from stack)  
        printf("%c", s.stk[s.top--]);
    }
        
        
    
    
}
int main()
{
    char string[MAX];
    s.top = -1;
   
    printf("Enter String");
    gets(string);
    int len = strlen(string);
    for(int i = 0; i < len; i++)
    {
        push(string[i]);
    }
    for(int j = 0; j < len; j++)
    {
        pop();
    }
    return 0;
}
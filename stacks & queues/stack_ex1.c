#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top = -1;
char ch[100] =  "EAS*Y*QUE***ST***IO*N***" , s[MAX], b[MAX];
void push(char);
char pop();


void main()
{
    int i;
    printf("%s\n",ch);

    for(i = 0; i < MAX; i++)
    {
        push(ch[i]);
    }
    

    for(i = 0; i < MAX; i++)
    {
        printf("%c",b[i]);
    }
    
}

void push(char ch)
{
    static int i = 0;
    
    if(top == MAX -1)
    {
        printf("Stack is OVERFLOW!\n");
        
    }
    else if(ch == '*')
    {
        b[i++] = pop();
    }
    else
    {
        s[++top] = ch;
    }
}

char pop()
{
    int val;
    if(top == -1)
    {
        printf("Stack is UNDERFLOW!");
        
    }
    else
    {
       
        top--;
        
    }
    return s[top + 1];   
}


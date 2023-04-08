#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX  10
void push(char);
void pop();
struct stack
{
    int top;
    char stk[MAX];
    
}s;

void push(char item)
{
    if (s.top == MAX -1)
    {
        printf("Overflow");
    }
    else
    {
        s.top++;
        s.stk[s.top] = item;
    }
    
}

void pop()
{
    if (s.top == -1)
    {
        printf("Underflow");
    }
    else
    {
        s.stk[s.top--];
    }
    
}




int main()
{
    char exp[MAX];
    s.top = -1;
    printf("\nINPUT THE EXPRESSION : ");
    gets(exp);
    for(int i = 0; i< strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
            continue;
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (exp[i] == ')')
            {
                if (s.stk[s.top] == '(')
                {
                    pop();
                }
                else
                {
                   printf("\nUNBALANCED EXPRESSION\n");
                   break; 
                }
                
            }
            if (exp[i] == '}')
            {
                if (s.stk[s.top] == '{')
                {
                    pop(); 
                }
                else
                {
                   printf("\nUNBALANCED EXPRESSION\n");
                   break; 
                }
                
            }
            if (exp[i] == ']')
            {
                if (s.stk[s.top] == '[')
                {
                    pop();
                }
                else
                {
                   printf("\nUNBALANCED EXPRESSION\n");
                   break; 
                }
                
            }

            
        }
        
        
    }
    if (s.top == -1)
    {
        printf("\nBALANCED EXPRESSION\n"); // Finally if the stack is empty, display that the expression is balanced
    }
    
    
    return 0;
}
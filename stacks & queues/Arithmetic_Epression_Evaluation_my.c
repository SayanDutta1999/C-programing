/* This program is for evaluation of postfix expression
* This program assume that there are only four operators
* (*, /, +, -) in an expression and operand is single digit only
* Further this program does not do any error handling e.g.
* it does not check that entered postfix expression is valid
* or not.
* */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
#define POSTFIXSIZE 100
float st[MAX];
int top = -1;
void push (float val);
float pop();
float evaluatepostfixexp(char exp[MAX]);
int main()
{
    
    char exp[POSTFIXSIZE];
    printf("\nEnter any postfix expression : ");
    gets(exp);
     evaluatepostfixexp(exp);
    /* call function to evaluate postfix expression */
    
    return 0;
}

float evaluatepostfixexp(char exp[POSTFIXSIZE])
{
    int i;
    char ch;
    float A, B, value;
     /* evaluate postfix expression */
    for(i = 0; exp[i]; i++)
    {
        ch = exp[i];
        if(isdigit(ch))
                    /* we saw an operand,push the digit onto stack
ch - '0' is used for getting digit rather than ASCII code of digit */
        {
            push((float)(ch - '0'));
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') 
        {
            /* we saw an operator
* pop top element A and next-to-top elemnet B
* from stack and compute B operator A
*/
            A = pop();
            B = pop();
            switch (ch) /* ch is an operator */
            {
            case '+':
                        value = A + B;
                        break;
            case '-':
                        value = A - B;
                        break;
            case '/':
                        value = A / B;
                        break;
            case '*':
                        value = A * B;
                        break;
            case '%':
                        value = (int)A % (int)B;
                        break;
            }
            /* push the value obtained above onto the stack */
            push(value);
        }
        
    }
    printf("\n Value of the postfix expression is: %.3f", pop());
    
    
}

/* define push operation */
void push(float val)
{
    
    if(top == MAX - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
/* define pop operation */
float pop()
{
    float val;
    if(top ==  - 1)
    {
        printf("Stack Underflow");
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
    
}

//  9 3 4 * 8 + 4 / -
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top = -1;
int st[MAX];
void push(int st[MAX], int val)
{
    int val;
    if(top == MAX-1)
    {
        printf("Stack is OVERFLOW!");
        
    }
    else
    {
        top = top + 1;
        st[top] = val;
    }
}

int main()
{
    int val;
     printf("Enter the number to push on stack: ");
                scanf("%d", &val);
                push(st, val);
                printf("%d", top);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int st[MAX];
int top = -1;
void push (int val);
int pop();
int insertatend(int);
int main()
{
    int N;
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    printf("Enter the element to be add at the end of Stack:");
    scanf("%d", &N);
    insertstend(N);
    

    return 0;
}
int insertstend(int N)
{
    if (top == MAX - 1)
    {
       push(N);
    }
       
    int tmp = st[top];
    pop();
    insertatend(N);
    push(tmp);
    return N;
    // int temp[MAX];
    // int peek = st[top];
    // while(top >= 0)
    // {
    //     pop();
    // }
    // insertstend(N);
}
void push(int val)
{
    if (top == MAX -1)
    {
        printf("Stack Overstack");
    }
    else
    {
        top++;
        st[top] = val;
    }
    
}
int pop()
{
    int val;
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        val = st[top];
        top--;
        
        }
        return val;
    
}

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define k 3
int top = -1, stck_arr[MAX], TOP[k], next[MAX], fre = 0;
void push(int , int);
int pop(int);
void display();
int isfull();
int isempty();



int isfull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(int val, int sn)
{
    
   
       if (isfull())
    {
        printf("Overflow");
    }
    else
    {
        int i = fre;
        fre = next[i];
        next[i] = TOP[sn];
        TOP[sn] = i;
        stck_arr[i] = val;


    }

    
}

int pop(int sn)
{
    if (isempty())
    {
        printf("Underflow");
    }
    else
    {
        int i = TOP[sn];
        TOP[sn] = next[i];
        next[i] = fre;
        return (stck_arr[i]);
    }
}




int main()
{
    for(int i = 0; i < k; i++) 
    TOP[i] = -1;

     // here we store next free space for storing next stack data
    for(int i = 0; i < MAX - 1; i++) 
    {
        next[i] = i+1; 
    }  
    next[MAX-1] = -1;


    push(10, 1);
    push(20, 1);
    push(30, 1);
    
    push(100, 0);
    push(200, 0);
    
    push(40, 1);
        
    push(1000, 2);
    push(2000, 2);
    push(300, 0);

    printf("Top of stack 0 is :%d", pop(1));
    printf("\nTop of stack 1 is :%d", pop(0));
    // printf("\nTop of stack 0 is :%d", pop(0));
    // printf("\nTop of stack 0 is :%d", pop(0));
    // printf("\nTop of stack 1 is :%d", pop(1));
    return 0;    
}

    

#include<stdio.h>
#include<stdlib.h>
#define MAX 200
void push1(int);
void push2(int);
void pop1();
void pop2();
void display_stck1();
void display_stck2();

int stack[MAX];
int top1 = - 1;
int top2 = MAX;
int main()
{
    int val1, val2, i;
    int num_of_ele =  top1 + 1;
    

    printf("Push data to array 1:\n");
    for (i = 1; i <= 10; i++)
    {
        push1(i);
        printf ("Value Pushed in Stack 1 is %d\n", i);
    }
    display_stck1();
    printf("\nPush data to array 2:\n");
    for (i = 11; i <= 20; i++)
    {
        push2(i);
        printf ("Value Pushed in Stack 2 is %d\n", i);
    }
    display_stck2();
    
     //Pushing on Stack Full  
    printf ("Pushing Value in Stack 1 is %d\n", 11);  
    push1(11);
     //Popping All Elements from Stack 1  

    while (num_of_ele)
    {
        pop1();
        --num_of_ele;
    }
    pop1();
    return 0;
}

void push1(int data)
{
    if(top1 < top2 - 1)
    {
        top1++;
        stack[top1] = data;
    }
    else
    {
        printf("OVERFLOW");
    }
}

void push2(int data)
{
    if(top1 < top2 - 1)
    {
        top2--;
        stack[top2] = data;
        
    }
    else
    {
       printf("OVERFLOW");
    }
}

void pop1()
{
    int val;
    if (top1 >= 0)
    {
        val = stack[top1];
        top1--;
        printf ("\n%d is being popped from Stack 1\n", val);  
    }
    else
    {
       printf("UNDERFLOW");
    }
    
}

void pop2()
{
    int val;
    if (top2 < MAX)
    {
        val = stack[top2];
        top2--;
        printf ("%d is being popped from Stack 2\n", val); 
    }
    else
    {
       printf("UNDERFLOW\n");
    }
}

void display_stck1()
{
    for (int i = top1; i >= 0; i--)
    {
        printf("\t%d", stack[i]);
    }
    printf("\n");
}

void display_stck2()
{
    for (int i = top2; i < MAX; i++)
    {
        printf("\t%d", stack[i]);
    }
    printf("\n");
}




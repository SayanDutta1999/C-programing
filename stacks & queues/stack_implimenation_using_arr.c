#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int top = -1, stck_arr[MAX];
void push(int val);
int pop();
int peek();
int display();
int isfull();
int isempty();

int main()
{
    int val, option; 

    do
    {
        printf("\n *************MAIN MENU*************");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
                printf("Enter the number to push on stack: ");
                scanf("%d", &val);
                push( val);
                break;
        case 2:
                val = pop();
                if(top != -1)
                {
                    printf("the value deleted from stack is: %d", val);
                }
                break;
        case 3:
                val = peek();
                if(top != -1)
                {
                    printf("the value stored at the top of stack is: %d", val);
                }
                break;
        case 4:
                display();
                break;
        default:
                printf("Enter valid option");
                break;
        }
        
    } while (option != 5);
    return 0;

}


void push( int val)
{
    
    if(isfull())
    {
        printf("Stack is OVERFLOW!\n");
        
    }
    else
    {
        top = top + 1;
        stck_arr[top] = val;
    }
}

int pop()
{
    int val;
    if(isempty())
    {
        printf("Stack is UNDERFLOW!");
        exit(1);
    }
    else
    {
        val = stck_arr[top];
        stck_arr[top--];
        return val;
    }   
}

int display()
{
    int i;
    if(isempty())
    {
        printf("Stack is EMPTY!");
    }
    else
    {
        for(i = top; i >= 0; i--)
        {
            printf("\n %d", stck_arr[i]);
            printf("\n");
        }
    }
}

int peek()
{
     if(isempty())
    {
        printf("Stack is EMPTY!");
        return -1;
    }
    else
    return (stck_arr[top]);
    
}

int isfull()
{
    if(top == MAX - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}




    
    
     
    

    



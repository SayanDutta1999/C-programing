#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int top = -1, stck_arr[MAX];
void push(int val);
void pop();
void peek();
void display();
void findmid();
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
        printf("\n 5. Find_Mid");
        printf("\n 6. Exit");
        printf("\n");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
                printf("Enter the number to push on stack: ");
                scanf("%d", &val);
                push(val);
                break;
        case 2:
                pop();
                break;
        case 3:
                peek();
                break;
        case 4:
                display();
                break;
         case 5:
                findmid();
                break;
        default:
                printf("Enter valid option");
                break;
        }
        
    } while (option != 6);
    return 0;

}



void push(int val)
{
    if (isfull())
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stck_arr[top] = val;
    }
    
}

void pop()
{
    int val;
    if (isempty())
    {
        printf("Underflow");
    }
    else
    {
        val = stck_arr[top];
        top--;
        printf("the value deleted from stack is: %d", val);
    }
    
}

void peek()
{
    int val;
    if (isempty())
    {
        printf("Underflow");
    }
    else
    {
        val = stck_arr[top];
        printf("the value stored at the top of stack is: %d", val);
    }   
}

void display()
{
    if (isempty())
    {
        printf("Underflow");
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            printf("\t%d", stck_arr[i]);
        }
    }
}

void findmid()
{
    int mid, i;
    mid = MAX / 2;
    printf("Middle element is: %d", stck_arr[mid]);
}

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



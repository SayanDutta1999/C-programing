#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int , int , int stk[MAX]);
void pop();
int mid();
int top = -1, stk[MAX], MID[MAX], mid_top = -1;
int main()
{
    int val, option; 

    do
    {
        printf("\n *************MAIN MENU*************");
        printf("\n 1. Push");
        printf("\n 2. mid");
        scanf("%d", &option);
         switch (option)
        {
        case 1:
                printf("Enter the number to push on stack: ");
                scanf("%d", &val);
                push( val);
                if (mid_top >= 0 && val < MID[mid_top])
                {
                    push(val, mid_top, MID);
                }
                
                break;
        case 2:
              
        default:
                printf("Enter valid option");
                break;
        }
    }while (option != 3)
  
    
}
void push(int val, int top, int stk[MAX])
{
    
    if (top == MAX - 1)
    {
        printf("Stack is OVERFLOW!\n");
    }
    else
    {
        stk[++top] = val;
    }
    
}
 
int mid()
{
    
    
    
}



{

}
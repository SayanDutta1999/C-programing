#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX], front = -1, rear = -1;
void enqueue();
int delete_element();
int peek();
void display();

int main()
{
    int val, option; 

    do
    {
        printf("\n *************MAIN MENU*************");
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
                enqueue();
                break;
        case 2:
                val =  delete_element();
                
                break;
        case 3:
                val = peek();
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

void  enqueue()
{
    int num;
    printf("\nInsert the number to the Queue:");
    scanf("%d", &num);
    if(rear == MAX - 1)
    {
         printf("\nQueue Overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear]  = num;
        
    }
    else
    {
        rear++;
        queue[rear]  = num;
    }

}

int delete_element()
{
    
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty!! PLease enter value first");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The number deleted is: %d", queue[front]);
        front ++;
    }
   
}

int peek()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty!! PLease enter value first");
    }
    else
    {
        printf("Peek is: %d", queue[front]);
    }
}

void display()
{
       if(front == -1 && rear == -1)
    {
        printf("Queue is empty!! PLease enter value first");
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("\t%d", queue[i]);
        }
    }
}
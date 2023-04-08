// 1. Write a program in C to create and display Singly Linked List. Go to the editor
// Test Data :
// Input the number of nodes : 3
// Input data for node 1 : 5
// Input data for node 2 : 6
// Input data for node 3 : 7
// Expected Output :

//  Data entered in the list :                                                                                   
//  Data = 5                                                                                                     
//  Data = 6                                                                                                     
//  Data = 7 

#include<stdio.h>
#include<stdlib.h>
void create_node(int);
void search();
void display_node();
struct node
{
    int data;
    struct node *next;
}*head;


int main()
{
    int n;
    printf("Input the number of nodes :");
    scanf("%d", &n);
    create_node(n);
     search();
    printf("\nData entered in the list : \n");
    display_node();
    return 0;
}
void create_node(int n)
{
    struct node  *temp, *ptr;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
   
  
    printf("Input the data to  node 1:");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    ptr = head;

    for(i = 2; i <= n; i++)
    {
            temp = (struct node *)malloc(sizeof(struct node));
        
            printf("Input the data to  node %d:", i);
            scanf("%d", &data);
            temp->data = data;
            temp->next = NULL;
            ptr->next = temp;
            ptr = ptr->next;
            
        
    }
   
  
}

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }
}

void display_node()
{
   

    if (head == NULL)
    {
        printf("The LInked list is Empty!");
    }
    
    while (head != NULL)
    {
       printf("-->%d", head->data);
       head = head->next;
    }
}



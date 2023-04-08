// 6. Write a program in C to insert a new node at the middle of Singly Linked List. Go to the editor
// Test Data and Expected Output :

// Input the number of nodes (3 or more) : 4                                                                    
//  Input data for node 1 : 1                                                                                    
//  Input data for node 2 : 2                                                                                    
//  Input data for node 3 : 3                                                                                    
//  Input data for node 4 : 4                                                                                    
                                                                                                              
//  Data entered in the list are :                                                                               
//  Data = 1                                                                                                     
//  Data = 2                                                                                                     
//  Data = 3                                                                                                     
//  Data = 4                                                                                                     
                                                                                                              
//  Input data to insert in the middle of the list : 5                                                           
//  Input the position to insert new node : 3                                                                    
                                                                                                              
//  Insertion completed successfully.                                                                             
                                                                                                              
//  The new list are :                                                                                           
//  Data = 1                                                                                                     
//  Data = 2                                                                                                     
//  Data = 5                                                                                                     
//  Data = 3                                                                                                     
//  Data = 4 
#include<stdio.h>
#include<stdlib.h>
void  create_node(int);
void addmid(int, int);
void display_node();

struct node
{
    int data;
    struct node *next;
}*head;
int main()
{
    int n, m, pos;
    printf("Input the number of nodes (3 or more) :");
    scanf("%d", &n);
    create_node(n);
    printf("\nData entered in the list are :\n");
    display_node();
    printf("\nInput data to insert at the middle of the list :");
    scanf("%d", &m);
    printf("\nInput the position to insert new node :");
    scanf("%d", &pos);
    
    if(pos <= 1 || pos >= n )
    {
       printf("Insertion can not be possible in that position.\n ");
    }
    
    if(pos > 1 || pos < n)
    {
        addmid(m, pos);
        printf("Insertion completed successfully.\n");
    }
    printf("The new list are :\n");
    display_node();
    

    return 0;
}

void  create_node(int n)
{
    int i, data;
    struct node *temp, *ptr;

    head = (struct node *)malloc(sizeof(struct node));
    printf("Input data for node 1 :");
    scanf("%d", &data);
    head->data = data; 
    head->next = ptr;
    ptr = head;
    
    for(i = 2; i<= n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Input data for node %d :", i);
        scanf("%d", &data);
        temp->data = data;
        temp->next = NULL;
        ptr->next = temp;
        ptr = ptr->next;

    }
    
}

void addmid(int data, int pos)
{
    int i;
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;  
    temp->next = NULL;  
    ptr = head;
     for(i = 2; i<= pos - 1; i++)
     {
         //here we actually traversing the list by ptr.
         ptr = ptr->next;
         if(ptr == NULL)
         {
             break;
         }
     }
     if(ptr != NULL)
     {
         temp->next = ptr->next;
         ptr->next = temp;
     }
     else
    {
        printf(" Insert is not possible to the given position.\n");
    }
}


void display_node()
{
    
      struct node *tmp = head;
        while (tmp != NULL)
        {   
            printf("Data = %d\n", tmp->data);
            tmp = tmp->next;
        }

}

// 5. Write a program in C to insert a new node at the end of a Singly Linked List.
// Input the number of nodes : 3                                                                                
//  Input data for node 1 : 5                                                                                    
//  Input data for node 2 : 6                                                                                    
//  Input data for node 3 : 7                                                                                    
                                                                                                              
//  Data entered in the list are :                                                                               
//  Data = 5                                                                                                     
//  Data = 6                                                                                                     
//  Data = 7                                                                                                     
                                                                                                              
//  Input data to insert at the beginning of the list : 4                                                        
                                                                                                              
//  Data after inserted in the list are :                                                                        
//  Data = 4                                                                                                     
//  Data = 5                                                                                                     
//  Data = 6                                                                                                     
//  Data = 7  
#include<stdio.h>
#include<stdlib.h>
void  create_node(int);
void addbeg(int);
void display_node();

struct node
{
    int data;
    struct node *next;
}*head;

int main()
{
    int n, m;
    printf("Input the number of nodes :");
    scanf("%d", &n);
    create_node(n);
    printf("\nData entered in the list : \n");
    display_node();
    printf("Input data to insert at the beginning of the list :");
    scanf("%d", &m);
    addbeg(m);
    printf("Data after inserted in the list are :  \n");
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
        printf("Input data for node %d:", i);
        scanf("%d", &data);
        temp->data = data;
        temp->next = NULL;
        ptr->next = temp;
        ptr = ptr->next;
    }
}



void addbeg(int data)
{
    struct node *temp2;

    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = data;
    temp2->next = head;
    head =temp2;
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


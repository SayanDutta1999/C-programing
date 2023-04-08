// 2. Write a program in C to create a singly linked list of n nodes and display it in reverse order. Go to the editor
// Test Data :
// Input the number of nodes : 3
// Input data for node 1 : 5
// Input data for node 2 : 6
// Input data for node 3 : 7
// Expected Output :

//  Data entered in the list are :                                                                               
//  Data = 5                                                                                                     
//  Data = 6                                                                                                     
//  Data = 7                                                                                                     
                                                                                                              
//  The list in reverse are :                                                                                    
//  Data = 7                                                                                                     
//  Data = 6                                                                                                     
//  Data = 5
#include<stdio.h>
#include<stdlib.h>
void reverselist();
void create_node(int n);
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
    printf("\nData entered in the list : \n");
    display_node();
    reverselist();
    printf("\nThe list in reverse are : ");
    display_node();
    
    return 0;
    
}

void create_node(int n)
{
    struct node *ptr, *temp;
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


void reverselist()
{
    struct node *prev = NULL;
    struct node *cur = head;
    struct node *ptr = NULL;
     

    // if (head != NULL)
    // {
    //    prev = head;
    //    cur = head->next;
    //    head = head->next;
    //    prev->next = NULL; //making head next as null
    
    while (cur != NULL)
    {
            ptr = cur->next;
            cur->next = prev;

            prev = cur;
            cur = head;
    }
    head = prev; //convert the last node as head
}
    
    

void display_node()
{
    
      struct node *tmp = head;
        while (tmp != NULL)
        {   
            printf("%d-->", tmp->data);
            tmp = tmp->next;
        }

}
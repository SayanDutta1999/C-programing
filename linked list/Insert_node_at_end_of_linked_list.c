#include<stdio.h>
#include<stdlib.h>
//void addendnode(struct node *, int);
struct node{
    int data;
    struct node *next;
};


int addendnode(struct node *h)
{
    struct node *ptr, *temp;
    ptr = h;
    temp = (struct node *)malloc(sizeof(struct node));  
    temp->data = 12;
    temp->next = NULL;

    while (ptr != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    while (h != NULL)
    {
       printf("%d-->", h->data);

       h = h->next; 
       
    }
  
    
}


int main()
{
    int num;
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));  

    head->data = 12;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 21;
    third->next = NULL;

    printf("Enter the value of end node");
    scanf("%d", &num);
    addendnode(head);

     
}



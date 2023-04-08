#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* addnode(struct node *ptr, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
   

    head = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
     
     head->data = 1;
     head ->next = NULL;

    // second->data = 2;
    // second->next = third;

    // third->data = 3;
    // third->next = NULL;
    
     
    ptr = addnode(ptr, 16);
    ptr = addnode(ptr, 30);
    ptr = addnode(ptr, 20);
    ptr = head;
    
    while (ptr != NULL)
     {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
     }
}

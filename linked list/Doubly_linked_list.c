#include<stdio.h>
#include<stdlib.h>
struct node* addtoempty(struct node*, int);
struct node* addatbeg(struct node*, int);
struct node* addatend(struct node*, int);
struct node* addafterpos(struct node*, int, int);
struct node* addbeforepos(struct node*, int, int);


struct node
{
   struct node *prev;
   int data;
   struct node *next;
};
int main()
{
    int pos = 3;
    struct node   *head, *ptr;

    head = NULL;
   
    
    head = addtoempty(head, 12);
    head = addatbeg(head, 21);
    head = addatend(head, 9);
    head = addafterpos(head, 45, pos);
    head =  addbeforepos(head, 58, pos);

   
    ptr = head; 
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    
    return 0;
}


struct node* addtoempty(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addatbeg(struct node *head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head = temp;
    return head;
}

struct node* addatend(struct node *head, int data)
{
    struct node *temp , *tp;
    
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    tp = head;
    while(tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    
    return head;
}  
struct node* addafterpos(struct node *head, int data, int pos)
{
    struct node *newn, *temp, *temp1;

    newn =  (struct node*)malloc(sizeof(struct node));
    newn->prev = NULL;
    newn->data = data;
    newn->next = NULL;

    temp = head;
    while (pos != 1)
    {
        temp = temp->next;
        pos--;
    }
    //for adding node at last position
    // if(temp->next == NULL)
    // {
    //     temp->next = newn;
    //     newn->prev = temp;
    // }
    temp1 = temp->next;
    temp->next = newn;
    newn->prev = temp;
    temp1->prev = newn;
    newn->next = temp1;

    return head;
}

struct node* addbeforepos(struct node *head, int data, int pos)
{
    struct node *newn = NULL;
    struct node *temp = head;
    struct node *temp1 = NULL;

    

    if(pos > 2)
    {
        temp = temp->next;
        pos--;
    }

    if(pos == 1)
    {
        head = addatbeg(head, 25);
    }
    else
    {
        temp1 = temp->next;
        temp->next = newn;
        newn->prev = temp;
        temp1->prev = newn;
        newn->next = temp1;
    }
    return head;

}
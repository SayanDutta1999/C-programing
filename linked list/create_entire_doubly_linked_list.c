#include<stdio.h>
#include<stdlib.h>
struct node* createlist(struct node* );
struct node* addtoempty(struct node*, int);
struct node* addatend(struct node*, int);
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

int main()
{
    struct node* head = NULL;
    struct node* ptr;
    head = createlist(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("-->%d", ptr->data);
        ptr = ptr->next;
    }
    
    
    return 0;
}

struct node* createlist(struct node* head)
{
    int n, data, i;
    printf("Input the number of nodes :");
    scanf("%d", &n);
    
    printf("Input the data to  node 1:");
    scanf("%d", &data);
    head = addtoempty(head, data);                         

    for(i = 2; i <= n; i++)
    {
        printf("Input the data to  node %d:", i);
        scanf("%d", &data);
        head = addatend(head, data);
    }
    return head;
}

struct node* addtoempty(struct node* head, int data)
{
    struct node* temp = (struct node *) malloc (sizeof(struct  node));

    head->prev = NULL;
    head->data = data;
    head->next = NULL;
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
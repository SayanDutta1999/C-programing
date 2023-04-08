#include<stdio.h>
#include<stdlib.h>
void create_node(int n);
void display_node();
void reverselist();
struct node
{
   int data;
   struct node *next;
}*head;

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    create_node(n);
    printf("\nData entered in the list : \n");
    display_node();
    reverselist();
    printf("\nThe list in reverse are : \n");
    display_node();
    return 0;
}

void create_node(int n)
{
    int i, data;
    struct node *temp, *ptr;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Input the data to  node 1:");
    scanf("%d", &data);
    head->data = data;
    head->next = ptr;
    ptr = head;

    for(i = 2; i <= n; i++ )
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Input the data to  node %d:", i);
        scanf("%d", &data);
        temp->data = data;
        temp->next = NULL;
        ptr->next = temp;
        ptr =  ptr->next;
    }
}

void display_node()
{
    struct node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf("\nData:- %d", ptr->data);
        ptr = ptr->next;
    }
    
}

void reverselist()
{
    struct node *temp = NULL;
    struct node *temp1;

    while (head != NULL)
    {
        temp1 = head->next;
        head->next = temp;
        temp = head;
        head = temp1;
    }
    head = temp;
    
}







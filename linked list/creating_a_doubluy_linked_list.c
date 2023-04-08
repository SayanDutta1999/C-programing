#include<stdio.h>
#include<stdlib.h>
void create_node(int n);
// void search();
void display_node();
struct node* delatbeg();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head;

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    create_node(n);
    // search();
    printf("\nData entered in the list : \n");
    
    display_node();
    delatbeg();
    printf("After deletion of 1st node:\n");
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
    head->prev = NULL;
    head->data = data;
    head->next = ptr;
    ptr = head;

    for(i = 2; i <= n; i++ )
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("%p\n", &temp);
        printf("Input the data to  node %d:", i);
        scanf("%d", &data);
        temp->prev = NULL;
        temp->data = data;
        temp->next = NULL;
        ptr->next = temp;
        temp->prev = ptr;
        ptr = ptr->next;
        
        
    }
}

// void search()  
// {  
//     struct node *ptr;  
//     int item,i=0,flag;  
//     ptr = head;   
//     if(ptr == NULL)  
//     {  
//         printf("\nEmpty List\n");  
//     }  
//     else  
//     {   
//         printf("\nEnter item which you want to search?\n");   
//         scanf("%d",&item);  
//         while (ptr!=NULL)  
//         {  
//             if(ptr->data == item)  
//             {  
//                 printf("\nitem found at location %d ",i+1);  
//                 flag=0;  
//                 break;  
//             }   
//             else  
//             {  
//                 flag=1;  
//             }  
//             i++;  
//             ptr = ptr -> next;  
//         }  
//         if(flag==1)  
//         {  
//             printf("\nItem not found\n");  
//         }  
//     }
// }

void display_node()
{
    struct node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf("\nData:- %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

struct node* delatbeg()
{
    struct node* temp = head;
    
    head->next = head;
    free(temp);
    temp = NULL;
    head->prev = NULL;
    return head;
}

 
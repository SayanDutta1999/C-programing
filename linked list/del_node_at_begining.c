#include<stdio.h>
#include<stdlib.h>
struct node* delatbeg();
void display_node();
struct node
{
   int data;
   struct node *next;
}*head;

int main()
{
     struct node *temp, *temp2;

    head = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    

    head->data = 12;
    head->next = temp;

    temp->data = 56;
    temp->next = NULL;
    // printf("%p\n", &head);
    // printf("%p\n", &head->data);
    // printf("%p\n", &head->next);
    // printf("%d\n", temp);
    // printf("%p\n", &temp);
    // printf("%d\n", temp->data);
    // printf("%p\n", &temp->data);
   

    delatbeg();
    // printf("-- - - - --- - - - - - - - - - - - -\n");
    // printf("%d\n", head);
    // printf("%p\n", &head);
    // printf("%p\n", &head->data);
    // printf("%p\n", &head->next);
    display_node();

}
struct node* delatbeg()
{
    if(head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *tmp = head;
        head = head->next;
        free(tmp);
        tmp = NULL;
    }
    return head;
}



void display_node()
 {
    
      struct node *tmp = head;        
      while (tmp != NULL)
         {   
            printf("Data = %d\n", tmp->data);
            //  printf("Data = %p\n", &tmp->data);
            tmp = tmp->next;
            
        }
}
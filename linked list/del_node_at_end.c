#include<stdio.h>
#include<stdlib.h>
struct node* delatend();
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
    delatend();
    display_node();

   
    return 0;
}
struct node* delatend()
{
    struct node *temp = head;
    struct node *temp1 = head;

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    // else
    // {
    //     while (temp->next != NULL)
    //     {
    //         //here we save the address of temp to temp1 for future refece the next line we traverse until temp is null.
    //         temp1 = temp;
    //         temp = temp->next;

    //     }
    //     temp1->next = NULL;
    //     free(temp);
    //     }
        else
        {
        while (temp->next->next != NULL)
        {
            //here we save the address of temp to temp1 for future refece the next line we traverse until temp is null.
            //temp1 = temp;
            temp = temp->next;
            
        }
        free(temp->next);
        temp->next = NULL;
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
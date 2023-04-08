#include<stdio.h>
#include<stdlib.h>
struct node* delatpos(int );
void display_node();
struct node
{
   int data;
   struct node *next;
}*head;

int main()
{
    int pos = 2;
    struct node *temp, *temp2;

    head = (struct node *)malloc(sizeof(struct node));
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    

    head->data = 12;
    head->next = temp;
     
     
    temp2->data = 95;
    temp2->next = temp;
    
    temp->data = 56;
    temp->next = NULL;
 
   

    delatpos(pos);
 
    display_node();

}
struct node* delatpos(int pos)
{
    struct node *cur = head;
    struct node *prev = head;

       if(pos== 1)
    {
        head = cur->next;
        free(cur);
        cur = NULL;
    }
     else
     {
         while (pos != 1)
         {
        
             prev = cur;
             cur = cur->next;
             pos--;

         }
         prev->next = cur->next;
         free(cur);
         cur = NULL;
       }


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
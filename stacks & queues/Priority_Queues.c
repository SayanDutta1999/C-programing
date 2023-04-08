#include<stdio.h>
#include<stdlib.h>
struct node
{
    
    int priority;
    char data;
    struct node *next;
};
//Assign Start to NULL
struct node *start = NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
struct node *display(struct node*);
int main(int argc, char const *argv[])
{
    int option;
    do{
        printf("\n---------MENU DRIVER---------\n");
        printf("1 Insert Data\n");
        printf("2 Delete data\n");
        printf("3 Display");
        printf("4 Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
                start = insert(start);
                break;
        case 2:
                start = delete(start);
                break;
        case 3:
                start = display(start);
                break;
        default:
                printf("Enter valid option");
                break;
        }
    }while (option != 4);
    
    
    return 0;
}


struct node *insert(struct node * start)
{
    int val;
    int pri;
    struct node *ptr, *p;
    ptr = (struct node *) malloc (sizeof(struct node));
    printf("\nEnter the data and priority:");
    scanf("%d %d", &val, &pri);
    //Creating node
    ptr->data = val;
    ptr->priority = pri;

    if (start == NULL || pri < start->priority )
    {
        ptr->next = start;
        start = ptr;
    }
    else
    {
        p = start;
        while (start != NULL && pri >= p->next->priority)
        {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }
    

    return start;
}

struct node *delete(struct node * start)
{
    struct node *ptr;
    
    if (start == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        ptr = start;
        printf("Deleted element is: %d", ptr->data);
        start = start->next;
        free(ptr);
    }
    return start;
    
}

struct node *display(struct node* start)
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("priority queue is:\n");
        while (ptr != NULL)
        {
            
            printf("\t%d[priority %d]", ptr->data, ptr->priority);
            ptr = ptr->next;
        }
    }
    return start;
    
}




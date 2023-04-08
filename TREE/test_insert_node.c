#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create(struct node*);
struct node *insert_node(struct node *,int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
void display(struct node *);


void create(struct node *tree){
    tree = NULL;
}

struct node *insert_node(struct node *tree, int value){
    struct node *ptr, *nodeptr, *parentNode;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = tree->right = NULL;
    }
    else
    {
        nodeptr = tree;
        while(nodeptr != NULL){
            parentNode = nodeptr;
            if (value < nodeptr->data)
            {
                nodeptr = nodeptr->left;
            }
            else{
                nodeptr = nodeptr->right;
            }
        }
        if (value < parentNode->data)
        {
            parentNode->left = ptr;
        }
        else{
            parentNode->right = ptr;
        }
    }
    return tree;
}


void preorder(struct node *tree){
    if(tree != NULL)
    {
        printf(" --> %d", tree->data);
        inorder(tree->left);
        inorder(tree->right);
    }
}

void inorder(struct node *tree){
    if(tree != NULL)
    {
        inorder(tree->left);
        printf(" --> %d", tree->data);
        inorder(tree->right);
    }
}

void postorder(struct node *tree){
    if(tree != NULL)
    {
        inorder(tree->left);
        inorder(tree->right);
        printf(" --> %d", tree->data);
    }
}



int main()
{
    create(tree);
    tree = insert_node(tree, 59);
    tree = insert_node(tree, 15);
    tree = insert_node(tree, 20);
    tree = insert_node(tree,11);
    tree = insert_node(tree, 41);
    tree = insert_node(tree, 14);
             
        
     

    return 0;
}
 




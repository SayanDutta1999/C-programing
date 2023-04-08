#include<stdio.h>
#include<stdlib.h>
#define COUNT 10
struct treenode *createnode(int value);
void printtree( struct treenode *root);
void display(struct treenode *root);
struct treenode{
    int value;
    struct treenode *left;
    struct treenode *right;
};

struct treenode *createnode(int value){
    struct treenode *newnode = (struct treenode *)malloc(sizeof(struct treenode));
    if(newnode == NULL){
        printf("Tree is empty\n");
        return NULL;
    }
    else{
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
}
// Function to print binary tree in 2D
// It does reverse inorder traversal
void display(struct treenode *root)
{
    // Base case
    if (root != NULL)
    {
        printf("%d ", root->value);
        display(root->left);
        display(root->right);
    }
    
    
}
 
int main()
{
    struct treenode *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->left = createnode(6);
    display(root);
    return 0;
}
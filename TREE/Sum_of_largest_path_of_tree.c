#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
int max(int, int);
struct node* newNode(int data);
int diameterAndHeight(struct node *);
int storemax = 0;
int main()
{
    tree = newNode(-10);
    tree->left = newNode(9);
    tree->right = newNode(20);
    tree->right->left = newNode(15);
    tree->right->right = newNode(7);
    diameterAndHeight(tree);
    printf("Diameter is:- %d", storemax);
    return 0;
}

struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);

}

int max(int a, int b){
   if(a > b){
       return a;
   }
   else{
       return b;
   }
}

int diameterAndHeight(struct node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else{
        int lh = diameterAndHeight(tree->left);
        int rh = diameterAndHeight(tree->right);
        storemax  = max(storemax, (lh + rh + tree->data));
        return max(lh, rh) + tree->data;
    }
    
}



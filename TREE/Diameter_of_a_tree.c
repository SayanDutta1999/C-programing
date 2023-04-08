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
    tree = newNode(1);
    tree->left = newNode(3);
    tree->right = newNode(2);
    tree->right->left = newNode(4);
    tree->right->left->left = newNode(5);
    tree->right->left->left->left = newNode(9);
    tree->right->right = newNode(6);
    tree->right->right->right = newNode(6);
    tree->right->right->right->right = newNode(6);
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
        storemax  = max(storemax, (lh + rh));
        return max(lh, rh) + 1;
    }
    
}



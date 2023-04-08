// implimentation of linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void printlist(struct node* n){
	
	while(n != NULL){
		printf("%d-->", n -> data);
		n = n -> next;
		
	}
}

int main(){
	
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
    // allocate 3 nodes in the heap
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 1; //assign data in first node
	head->next = second; // Link first node with the second node
	
	second->data = 2; //assign data in first node
	second->next = third; // Link first node with the third node
	
	third->data = 3;
	third->next = NULL;
	
	printlist(head);
	
	return 0;
	
	
	
}

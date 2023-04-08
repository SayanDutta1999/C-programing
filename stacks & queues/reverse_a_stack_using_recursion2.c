#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define True 1
#define False 0
struct stack
{
    int top;
    int array[MAX];
}st;

void initialize(){
    st.top = -1;
}
int isFull(){
    if(st.top >= MAX - 1)
    {
        return True;
    }
    else
    {
        return False;
    }
}
int isEmpty(){
    if(st.top ==  -1)
    {
        return True;
    }
    else
    {
        return False;
    }
}
void push(int val){
    if (isFull())
    {
        printf("Stack is full...\n");
    }
    else
    {
        st.array[st.top + 1] = val;
        st.top++; 
    }
    
}
int pop(){
    if (isEmpty())
    {
        printf("Stack is empty...\n");
    }
    else
    {
        st.top = st.top - 1;
            return st.array[st.top + 1] ;
    }
    
}

void printStack(){
    if (!isEmpty())
    {
        int tmp = pop();
        printStack();
        printf(" %d ", tmp);
        push(tmp);
    }
    
}
void insertAtBottom(int val){
    if (isEmpty)
    {
        push(val);
    }
    else
    {
        int top = pop();
        insertAtBottom(val);
        push(top);
    }
    
}
void reverse() {
    if (!isEmpty()) {
        
        int top = pop();
        reverse();
        insertAtBottom(top);
    }
}

int getSize(){
 return st.top+1;
}
 
int main()
{
     /* Initializing top index of stack */
    initialize();
    /* Adding elements in stack */
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Original Stack\n");
    printStack();
    reverse();
    printf("\nReversed Stack\n");
    printStack();
    return 0;
}
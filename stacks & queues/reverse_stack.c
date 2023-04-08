#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
#define MAX 10
int top = -1;
int stk[MAX];
int main()
{
    int arr[MAX], i, val, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the element in the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        push(arr[i]);
    }
    
      for(i = 0; i < n; i++)
    {
        val = pop();
        arr[i] = val;
    }

   
    for(i = 0; i < n; i++)
    {
        printf("-->%d", arr[i]);
    }
    return 0;
}

void push(int val)
{
    stk[++top] = val;
}

int pop()
{
    return(stk[top--]);
}
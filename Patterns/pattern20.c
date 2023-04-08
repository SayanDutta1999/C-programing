/**
*****
*   *
*   *
*   *
*****

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
   
    for(int i = 0; i < n; i++){
       for (int j = 0; j < n; j++)
       {
            if(i == 0  || i== n - 1 || j == 0 || j == n - 1){
                printf("*");
            }
            else
                printf(" ");
       }
       printf("\n");
       
    }
}
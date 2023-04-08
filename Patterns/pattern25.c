/**
    *
   * *
  *   *
 *     *
*       *

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    for(int i=1; i<=n; i++)
    {
        for(int j = n; j >= 1; j--){
            if(i == j)
                printf("*");
            else
                printf(" ");
        }
        
        for(int k=2; k<=n; k++){
            if(i == k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
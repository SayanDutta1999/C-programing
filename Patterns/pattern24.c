/**
 
*****
 ****
  ***
   **
    *


 */

#include<stdio.h>

void print(int n);
    int main(){
        int N = 5;
        print(N);
        return 0;
}
void print(int n){
   
   for(int i = 1; i <= n; i++){
        
        // Space
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        
        // Star 
        for(int k = n; k >= i; k--){
            printf("*");
        }
        printf("\n");
        
        
   }

}
/**
 
  *
   **
  ***
 ****
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
   
   for(int i = 1; i <= n; i++){
        
        // Space
        for(int j = n; j > i; j--){
            printf(" ");
        }
        
        // Star 
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
        
        
   }

}
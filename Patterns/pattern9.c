/**
*
 ***
*****
*****
 ***
  *

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }

         // star
        for(int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }

         // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        printf("\n");
    }

    for(int i = n - 1; i >=  0; i--){
        // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }

         // star
        for(int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }

         // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        printf("\n");
    }
}
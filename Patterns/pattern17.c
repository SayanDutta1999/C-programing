/**
  A
  A B A
A B C B A

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    for(int i = 0; i <  n; i++){
       
        // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }

         // Char
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for(int j = 1; j <= 2 * i + 1; j++){
            printf("%c", ch);
            if(j <= breakPoint) ch++;
            else ch--;
        }

         // space
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        printf("\n");
    }
}
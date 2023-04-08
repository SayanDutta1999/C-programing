/**
 
A
B B
C C C

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
        char ch = 'A' + i;
        for(char j = 0; j <= i; j++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}
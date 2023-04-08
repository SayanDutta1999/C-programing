/**
 
C
C B 
C B A

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
        char ch = 'A' + n - 1;
        for(char j = 0; j <= i; j++){
            printf("%c ", ch);
            ch = ch - 1;
        }
        printf("\n");
    }
}
/**
 
A
A B
A B C

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A' + i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}
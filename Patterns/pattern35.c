/**
    5
    44
    333
    2222
    11111

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            printf("%d", i);
        }
        printf("\n");
    }
}
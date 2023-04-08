/**
    11111
    2222
    333
    44
    5

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
        for(int j = i; j <= n; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}
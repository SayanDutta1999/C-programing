/**
    54321
    5432
    543
    54
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
        for(int j = n; j >= i; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}
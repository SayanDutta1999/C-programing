/**
    1
    21
    321
    4321
    54321

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
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}
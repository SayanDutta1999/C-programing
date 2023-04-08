/**
    5
    45
    345
    2345
    12345

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
        for(int j = i; j <= n; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
/**
    55555
    4444
    333
    22
    1

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
        for(int j = i; j >= 1; j--){
            printf("%d", i);
        }
        printf("\n");
    }
}
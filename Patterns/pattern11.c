/**
1
0 1
1 0 1

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2  == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            printf("%d", start);
            start = 1 - start;
        }
        printf("\n");
    }
}
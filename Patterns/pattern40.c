/**

    1
    01
    101
    0101
    10101

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
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) start = 0;
        else start = 1;
        for(int j = 1; j <= i; j++){
            printf("%d", start);
            start = 1 - start;
        }
        printf("\n");
    }
}
/**
    12345
    4321
    123
    21
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
        if(i % 2 == 0){
            for(int j = i; j >= 1; j--){
                printf("%d", j);
            }
        }
        else
        {
            for(int j = 1; j <= i; j++){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}
/**
 
1 
2 2 
3 3 3

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    for(int i = 1; i <=  n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}
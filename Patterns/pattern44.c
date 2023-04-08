/**

    5 5 5 5 5 
    4 5 5 5 5 
    3 4 5 5 5 
    2 3 4 5 5 
    1 2 3 4 5

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    int num;
    for(int i = n; i >= 1; i--){
        for(int j = i; j <= n; j++){
            printf("%d ", j);
        }
        for(int j = 1; j < i; j++){
            printf("%d ", n);
        }
        printf("\n");
    }
}
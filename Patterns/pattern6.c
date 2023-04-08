/**
 
1 2 3
1 2
1

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    for(int i = n - 1; i >=  0; i--){
        for(int j = 1; j <= i + 1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
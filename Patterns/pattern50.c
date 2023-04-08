/**

    1
    01
    001
    0001
    00001

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    int zero = 0;
    int one = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            printf("%d", zero);
        }
        
        for(int k = i; k == i; k--){
            printf("%d", one);
        }
        printf("\n");
    }
}
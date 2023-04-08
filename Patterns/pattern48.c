/*

    1 1 1 1 1 
    0 0 0 0 0 
    1 1 1 1 1 
    0 0 0 0 0 
    1 1 1 1 1 
*/


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", num);
            
        }
        num = !num;
        printf("\n");
    }
}
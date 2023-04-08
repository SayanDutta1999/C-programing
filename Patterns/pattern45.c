/**

    1 
    2 3 
    4 5 6 
    7 8 9 10

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
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}
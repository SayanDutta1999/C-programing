/**

    1 
    2 4 
    1 3 5 
    2 4 6 8 
    1 3 5 7 9

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
    for(int i = 1; i <= n; i++){
        if( i % 2 == 0) num = 2;
        else num = 1;
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }
}
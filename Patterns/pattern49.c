/*

1
23
456
78910
1112131415

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
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
/*

1
123
12345
1234567
123456789

*/


#include<stdio.h>
void print(int n);
int main(){
    int N = 9;
    print(N);
    return 0;
}

void print(int n){
    int num = 1;
    for(int i = 1; i <= n; i += 2){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
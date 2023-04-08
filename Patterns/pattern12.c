/**
1         1
1 2     2 1
1 2 3 3 2 1

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    int space = 2 * (n - 1);
    for(int i = 1; i <=  n; i++){
        // number
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }

         // star
        for(int j = 1; j <= space; j++){
            printf(" ");
            
        }

         // number
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
        space = space - 2;
    }
}
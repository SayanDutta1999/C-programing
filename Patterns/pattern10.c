/**
*
**
***
**
*

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    for(int i = 0; i <= 2 * n - 1; i++){
        int star = i;
        if(star > n) star = 2 * n - i;
        for(int j = 1; j <= star; j++){
            printf("*");
        }
        printf("\n");
    }
}
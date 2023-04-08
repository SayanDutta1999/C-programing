/**

    13579
    3579
    579
    79
    9

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    for(int i = 1; i <= 10; i += 2){
        for(int j = i; j <= 10; j += 2){
            printf("%d", j);
        }
        printf("\n");
    }
}
/**
 
ABC
AB
A

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(char j = 'A'; j <= 'A' + (n - i); j++){
            printf("%c", j);
        }
        printf("\n");
    }
}
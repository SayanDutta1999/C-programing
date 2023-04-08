/**

    1234567
    12345
    123
    1

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 7;
    print(N);
    return 0;
}

void print(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
            
        }
        if(i % 2 == 0)
            i = i - 2;          
        else
            i--; 
        printf("\n");
    }
}
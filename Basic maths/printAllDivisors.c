#include<stdio.h>
int main(){
    int digit = 36;
    for(int i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            printf("%d ", i);
            if((digit / i) != i){
                printf("%d ", digit / i);
            }
        }
    }
    return 0;
}
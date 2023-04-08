#include<stdio.h>
int main(){
    int cnt = 0;
    int digit = 3;
    for(int i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            cnt++;
            if((digit / i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2){
        printf("Number is a Prime Number");
    }
    else{
         printf("Number is not a Prime Number");
    }
    return 0;
}
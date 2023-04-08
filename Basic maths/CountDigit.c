#include<stdio.h>
int main(){
    int digit = 123;
    int cnt = 0;

    while(digit > 0){
        cnt++;
        digit = digit / 10;
    }

    printf("Count of the number is : %d", cnt);
    return 0;
}
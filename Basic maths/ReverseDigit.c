#include<stdio.h>
int main(){
    int digit = 123;
    int revNum = 0;

    while(digit > 0){
        int rem = digit % 10;
        revNum = revNum  * 10 + rem;
        digit = digit / 10;
    }
    printf("Reverse number is : %d", revNum);
    return 0;
}
#include<stdio.h>
int main(){
    int digit = 121;
    int revNum = 0;
    int temp = digit;
    while(temp > 0){
        int rem = temp % 10;
        revNum = revNum  * 10 + rem;
        temp = temp / 10;
    }
    if(revNum == digit){
        printf("Digit is Palindrome");
    }
    else{
        printf("Digit is not Palindrome");
    }
    return 0;
}
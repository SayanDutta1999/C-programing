#include<stdio.h>
int main(){
    int digit = 371;
    int armstrongNumber = 0;
    int temp = digit;
    while(temp > 0){
        
        int lastDigit = temp % 10;
        armstrongNumber = armstrongNumber  + (lastDigit * lastDigit * lastDigit);
        temp = temp / 10;
    }
    if(armstrongNumber == digit){
        printf("Number is an Armstrong Number");
    }
    else{
        printf("Number is not an Armstrong Number");
    }
    return 0;
}
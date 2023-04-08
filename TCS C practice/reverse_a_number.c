#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number, rev = 0, rem, num;
    scanf("%d", &number);
    num = number;
    printf("Before - %d\n", number);
    while(number != 0){
        rem = number % 10;
        rev = rev * 10 +rem;
        number = number / 10;
    }
    printf("After reverse - %d\n", rev);
    // Check whether the number is palinderom or not
    if(rev == num){
        printf("Number is PALINDEOME");
    }else
        printf("Number is not PALINDEOME");
    
    return 0;
}
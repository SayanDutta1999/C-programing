#include<stdio.h>
int main(){
    int a = 20;
    int b = 40;
    while( a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }

    if(a == 0) printf("GCD or HCF is  %d", b);
    else printf("GCD or HCF is  %d", a);
    return 0;
}
#include<stdio.h>
int main(){
    int gcd = 0;
    int n1 = 20;
    int n2 = 40;
    int mini = n1 < n2 ? n1 : n2;
    for(int i = mini; i >= 1; i--){
        if((n1 % i == 0) && (n1 % i == 0)){
            gcd = i;
            break;
        }
    }
    printf("GCD or HCF is  %d", gcd);
    return 0;
}
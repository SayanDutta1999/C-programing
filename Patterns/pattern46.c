/**

    1 
    2 6
    3 7 10       
    4 8 11 13    
    5 9 12 14 15 


 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 5;
    print(N);
    return 0;
}

void print(int n){
    int diff, value;
    for(int i = 1; i <= n; i++){
        diff = n - 1;
        value = i;
        for(int j = 1; j <= i; j++){
            printf("%d ", value);
            value += diff;
            diff--;
        }
        printf("\n");
    }
}
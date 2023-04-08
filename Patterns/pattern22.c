/**
 
33333
32223
32123
33333


 */

#include<stdio.h>
int min(int a, int b);
void print(int n);
int main(){
    int N = 4;
    print(N);
    return 0;
}
void print(int n){
    for(int i = 0; i < 2 * n - 1; i++){
       for (int j = 0; j < 2 * n - 1; j++)
       {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j; //(2 * n - 2) - j (completed col)
            int down = (2 * n - 2) - i; //(2 * n - 2) - i (completed row)
            printf("%d", n - min(min(top, down), min(left, right)));
        }
       printf("\n");
    }
}
int min(int a, int b){
    return (a > b)? b : a;
}
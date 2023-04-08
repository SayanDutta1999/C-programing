/**
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

 */


#include<stdio.h>
void print(int n);
int main(){
    int N = 3;
    print(N);
    return 0;
}

void print(int n){
    int space = 0;
    for(int i = 0; i <  n; i++){
       
        // star
        for(int j = 1; j <= n - i; j++){
            printf("*");
        }

         // space
        for(int j = 0; j <space; j++){
           printf(" ");
        }

         // star
         for(int j = 1; j <= n - i; j++){
            printf("*");
        }
        printf("\n");
        space  +=  2;
    }
    space = n + 1;
    for(int i = 1; i <= n; i++){
       
        // star
        for(int j = 1; j <= i; j++){
            printf("*");
        }

         // space
        for(int j = 0; j <space; j++){
           printf(" ");
        }

         // star
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
        space  -=  2;
    }
}
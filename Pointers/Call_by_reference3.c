#include<stdio.h>
#include<stdlib.h>
void increament(int *a){
    *(a) += 1;
}
int main()
{
    int a = 10;
    increament(&a);
    printf("a = %d\n", a);
    return 0;
}
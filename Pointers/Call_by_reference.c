#include<stdio.h>
#include<stdlib.h>
void increament(int a){
    a += 1;
    printf("The address of a in increament method: %d\n", &a); 
    printf("\n");
}
int main()
{
    int a = 10;
    increament(a);
    // printf("a = %d\n", a);
    printf("The address of a in main method: %d\n", &a);
    return 0;
}
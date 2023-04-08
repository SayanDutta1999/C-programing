#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
         printf("You are not eligible for casting your vote.");
    }
    return 0;
}
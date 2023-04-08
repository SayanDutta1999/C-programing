#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    char ch;
     printf("Enter the number");
     scanf("%d", &a);
     fflush(stdin); // fflush clears the input buffer which store the enter as a char.
     printf("Enter the character");
     scanf("%c", &ch);

     return 0;
}

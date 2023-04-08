

//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
    else
   return fib(n-2) + fib(n-1);
}
 
int main ()
{
  int n;
  printf("enter teh value of n:");
  scanf("%d", &n);
  printf("%d", fib(n));
  getchar();
  return 0;
}

#include<stdio.h>
/*void swap()
{
	int* x;
	int* y;
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	
	int x=10 , y = 20;
	
	swap(&x, &y);
	
	printf("%d%d\n", x, y);
	return 0;
} */


        // 
        // "Pure" C code using Reference Parameter! (aka pointers) 
        // 
         
      void  doit( int * x ) 
        { 
            *x = 5; 
        } 
 
 
        // 
        // Test code for passing by a variable by reference 
        // Note the use of the & (ampersand) in the function call. 
        // 
        int  main() 
        { 
          int z = 27; 
          doit( & z ); 
          printf("z is now %d\n", z); 
 
          return 0; 
        } 

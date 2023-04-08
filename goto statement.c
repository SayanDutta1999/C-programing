#include<stdio.h>
int main()
{
	int i=1;
   goto firstname;
    
    firstname:
    	printf("Sayan\n");
    goto end;
    secondname:
    	printf("Dutta\n");
    	 goto end;
    fullname:
    	printf("Sayan Dutta\n\n");
    	 goto end;
    end: 
    
    // print 1 to 5 using if and goto statement
    
    
    begining:
    if(i<6)
    {
    	printf("%d\n",i);
    	i++;
    	goto begining;
	}
    	
    	
    	
    	
    	
    	
    	
    	
    return 0;
}

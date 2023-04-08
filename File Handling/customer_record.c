#include <stdio.h>
#include<stdlib.h>  
void main()  
{  
    FILE *fptr;  
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("empdetails.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "Id= %d\n", id);
    fflush(stdin);  
    printf("Enter the name \n");  
    gets(name);
    fprintf(fptr, "Name= %s\n", name); 
    
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);  
    fclose(fptr);  
}
// total sales by salesman and total number of each sales
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, **sales, total_sales = 0, salesman, item;
	
	printf("Enter the number of salesman:");
	scanf("%d", &salesman);
	
	printf("Enter the number of item:");
	scanf("%d", &item);
	
	sales = (int **) malloc (salesman * sizeof (int *));
	
	for(i = 0; i < salesman; i++)
	{
		sales[i] = (int *) malloc (item * sizeof (int));
	}
	
	printf("Enter the  sales  of 3  item by salesman:");
	for(i = 0; i < salesman; i++)
	{
		for(j = 0; j < item; j++)
		{
			scanf("%d", sales[i][j]);
		}
	}
	
	//print total number of item sale by salesman
	for(i = 0; i < salesman; i++)
	{
		total_sales = 0;
		for(j = 0; j < item; j++)
		{
			total_sales += sales[i][j];
			printf("tatal sales by salesman is %d : %d", i + 1, total_sales);
		}
	}
	
	// total sale of each item
	
	for(i = 0; i < item; i++)
	{
		total_sales = 0;
		for(j = 0; j < salesman; j++)
		{
			total_sales += sales[j][i];
			printf("total sale of each item is %d : %d", i + 1, total_sales);
		}
	}
	
}

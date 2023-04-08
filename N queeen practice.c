// N queeen practice
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int count = 0;

int printsol(int *x, int n)
{
	 	int i, j;
 	printf("\n\nsolution is %d:\n\n",count++);
 	for(i = 1; i <= n; i++){
 		printf("\t%d",i);
 	}
 	for(i = 1; i <= n; i++){
 		printf("\n\n%d",i);
 		for(j = 1; j <= n; j++){
 			if(x[i] == j){
 				printf("\tQ");
 			}
 			else
 				printf("\t-");
		 }
	 }
}


int place(int *x, int row, int col)
{
	for(int j = 1; j <= row-1; j++)
	{
		if((x[j] == col) || (abs(x[j] - col) == (abs(j - row))))
		return 0;
	}
	return 1;
}

int Nqueens(int *x, int row, int n)
{
	for(int col = 1; col <= n; col++)
	{
		if(place(x, row, col))
		{
			x[row] = col;
	
			if(row == n)
			{
				printsol(x, n);
			}
			else
			{
				Nqueens(x, row + 1, n);		
			}
		}
	}
	return 1;
}


int main()
{
	int n, *x;	
	printf("Enter the number of n");
	scanf("%d", &n);
	x=(int *)malloc(sizeof (int));
	Nqueens(x, 1, n);
	printf("/nTotal number of Solution is:", count);
}

// N-Queens problem

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count=0;

int finalSol(int *X, int n){
 	int i, j;
 	printf("\n\nsolution is %d:\n\n",count++);
 	for(i = 1; i <= n; i++){
 		printf("\t%d",i);
 	}
 	for(i = 1; i <= n; i++){
 		printf("\n\n%d",i);
 		for(j = 1; j <= n; j++){
 			if(X[i] == j){
 				printf("\tQ");
 			}
 			else
 				printf("\t-");
		 }
	 }
 }

int place(int *X, int row, int col){
	int j;
	for(j = 1; j <= row - 1; j++){
        // if((in same coloumn or in the same diagonal
        // here X[] is solution vector and j is row for the vector X[1]==1 
		if((X[j] == col) || (abs(X[j] - col) == abs(j - row)))
		return 0;
	}
	return 1; 
}

int NQueens(int *X, int row, int n){
	int col;
	for(col = 1; col <= n; col++){
		if(place(X, row, col)){
			X[row] = col;
			if(row == n){
			  finalSol(X, n);	
			}
			else
			NQueens(X, row+1, n);
		}
	
	}
	return 1;
}


int main(){
	int n, X;
	printf("Enter the number of Queens:");
	scanf("%d",&n);
	X=(int *)malloc(n *sizeof(int));
	NQueens(X, 1, n);
	printf("\nTotal number of Solution is:%d",count);
}

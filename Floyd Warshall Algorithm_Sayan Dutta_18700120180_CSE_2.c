// Floyd-Warshall Algorithm in C
#include <stdio.h>
#include<stdlib.h>
#define _I_MAX 1000001

// Implementing floyd warshall algorithm

void floyd_warshall(int **adj_mat, int **pred_mat, int n){
	
	int i = 0, k = 0, j = 0;
	
	for(k = 0; k < n; k++){
	
		for(i = 0; i < n; i++){
		
			for(j = 0; j < n; j++){
		
				if(adj_mat[i][j] > adj_mat[i][k] + adj_mat[k][j]){
		
					adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
		
					pred_mat[i][j]=k;
					
				}
				
			}
		}
	}
}

int main(){
	
	int **adj_mat, **pred_mat, i=0, j=0, n;
	
	printf("Enter the size of the matrix:\n");
	
	scanf("%d", &n);
	
	adj_mat = (int **) malloc (n* sizeof(int *));

	pred_mat = (int **) malloc (n* sizeof(int *));
	
	for(i = 0; i < n; i++){
		
		adj_mat[i]=(int *) malloc (n*sizeof(int));
		
		pred_mat[i]=(int *) malloc (n*sizeof(int));
	}
	
	printf("\nEnter the distance value as %d if there does not exist any edge from that given vertex.\n",_I_MAX);
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			scanf("%d", &adj_mat[i][j]);
		}
	}
	
    
	for(i = 0; i < n; i++){
	
	}
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			if(i!=j || adj_mat[i][j]!=_I_MAX){
				pred_mat = i;
			}
			
			else{
			     pred_mat = _I_MAX;
			}
		}
	}
	
	floyd_warshall(adj_mat, pred_mat, n);
	
	printf("\n distance matrix:");
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			printf("%d", adj_mat[i][j]);
		}
	}
	
	printf("\n predecessor matrix:");
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			printf("%d", pred_mat[i][j]);
		}
	
		printf("\n");
			
	}
	
	
	
	
}



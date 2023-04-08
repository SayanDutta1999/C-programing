// N-Queens problem

#include<stdio.h>
#include<math.h>
int X[20], count;

void finalSol(int n){
 	int i, j;
 	printf("\n\nNumber of final solution is %d:\n\n",count++);
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

int place(int k, int i){
	int j;
	for(j = 1; j <= k - 1; j++){
		if((X[j] == i) || (abs(X[j] - i) == abs(j - k)))
		return 0;
	}
	return 1;
}

int NQueens(int k, int n){
	int i;
	
	for(i = 1; i <= n; i++){
		if(place(k, i)){
			X[k] = i;
			if(k == n){
			  finalSol(n);	
			}
			else
			NQueens(k+1, n);
		}
	
	}
	return 1;
}


int main(){
	int n;
	printf("Enter the number of Queens:");
	scanf("%d",&n);
	NQueens(1, n);
}

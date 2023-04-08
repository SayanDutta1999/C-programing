#include<stdio.h>
#include<stdlib.h>
float TSP(int, int , int, float**, int*);
float TSP( int current, int start, int n, float **cost, int *visited) //int level)
{
	//CALCULATE COST  XTH VERTEX TO START
	//IF THERE EXISTS A VRETEX J FOR WHICH COST IS KNOEN FORM J TO START
	float min = 9999999.0, tempcost;
//	level++;
	
	//for(int j = 0; j < level; j++)
	//	printf(" ");	
	printf(" --> %d", current);
		
	for(int j = 0; j < n; j++)
	{
	
			if(visited[j] == 0) // HERE WE ARE CALCULATE THOSE VERTICES WHICH ARE NOT VISITED YET
		{
			visited[j] = 1;
			tempcost = cost[current][j] + TSP(j, start, n, cost, visited );
			if(tempcost < min)
			{
				min = tempcost;
			}
		}
		// visited[current] = 0;
	}
	printf("++++\n");
	return min;
		
}



int main()
{
	int n, start, j, *visited; //level;
	float **cost;
	
	printf("Enter the value of Vertices:"); 
	scanf("%d", &n);

	visited = (int *)malloc(n * sizeof(int));
	cost = (float **)malloc(n * sizeof(float *));
	for(int i = 0; i < n; i++)
	{
		cost[i] = (float *)malloc(n * sizeof(float ));
		visited[i] = 0; // we use this st of vertex as a flag 0 false / 1
	}
	
	printf("Enter the start node:");
	scanf("%d", &start);
	visited[start] = 1; // 1 means ture
	
	printf("Enter value in cost matrix:\n ");
	for(int i = 0; i < n; i++)
	{
		for(int  j = 0; j < n; j++)
		 {
			scanf("%f", &cost[i][j]);
		}
	}
	
	printf("%f", TSP(start, start, n, cost, visited));
	
	return 0;
	
}

/*

 0 10 15 20
5 0 9 10
6 13 0 12
8 8 9 0

*/

	



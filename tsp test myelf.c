#include<stdio.h>
#include<stdlib.h>
float tsp(int, int, int, float**, int*);
int main()
{
	int n, i, j, start;
	float **cost;
	int *visited;
	
	printf("Enter the number of vertices:");
	scanf("%d", &n);
	
	printf("Enter the start vertex:");
	scanf("%d", &start);
	
	cost = (float **)malloc(n * sizeof (float *));
	visited = (int *)malloc(n * sizeof (int));
	
	for(i = 0; i < n; i++)
	{
		cost[i] = (float *)malloc(n * sizeof (float *));
		visited[i] = 0;
	}
	
	printf("Enter the value of cost:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%f", &cost[i][j]);
		}
	}
	visited[start] = 1;
	printf("%f", tsp(start, start, n, cost, visited));
	
}

float tsp(int current, int start, int n, float **cost, int *visited)
{
	float min = 99999999.999, mincost;
	printf(" -->%d", current);
	
	for(int j = 0; j < n; j++)
	{
		if(visited[j] == 0)
		{
			visited[j] = 1;
			mincost = cost[current][j] + tsp(j, start, n, cost, visited);
			
			if(min > mincost)
			{
				min = mincost;
			}
		}
	}
	printf("\n");
	return min;
}



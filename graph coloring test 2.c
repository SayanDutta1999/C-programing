#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>




bool place(bool **graph, int *color)
{
    // check for every edge
    int n;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (graph[i][j] && color[j] == color[i])
                return 0;
    return 1;
}


/* A utility function to print solution */
int printSolution(int *color)
{
	int n, i;
    printf("Solution Exists:"
           " Following are the assigned colors \n");
    for (i = 0; i < n; i++)
        printf(" %d\t ", color[i]);
    printf("\n");
}

 

bool graphcolouring(bool **graph, int m, int i, int *color)
{
    // if current index reached end
    int n;
    if (i == n) {
        // if coloring is safe
        if (place(graph, color)) {
            // Print the solution
            printSolution(color);
            return 1;
        }
        return 0;
    }
 
    // Assign each color from 1 to m
    for (int j = 1; j <= m; j++) {
        color[i] = j;
 
        // Recur of the rest vertices
        if (graphcolouring(graph, m, i + 1, color))
            return 1;
 
        color[i] = 0;
    }
 
    return 0;
}
 

 
// Driver program to test above function
int main()
{
	int n, m, i, j, row, col;
	int *color;
	bool **graph;
  
	printf("Enter the size of color:");
	scanf("%d",&n);
	
	printf("Enter the number of color:");
	scanf("%d",&m);
	
	
	
	color = (int *) malloc (n * sizeof (int));
	graph = (bool **) malloc (n* sizeof (bool *));
    
	for(i = 0; i < n; i++)
	{
  	 graph = (bool **)malloc(n * sizeof(bool));
	}
	
	printf("Enter the value of graph:");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; i++)
		{
			scanf("%d\n",&graph[i][j]);
		}
    }
	
    for (i = 0; i < n; i++)
    {
	  color = (int *) malloc (n * sizeof (int));
      color[i] = 0;
    }
 
    if (!graphcolouring(graph, m, 0, color))
        printf("Solution does not exist");
 
    return 0;
}

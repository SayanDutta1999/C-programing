#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define n 4

bool place(bool graph[n][n], int color[], int node, int c)
{
    // check for every edge
 
    for (int j = 0; j < n; j++)
    {
	    if (graph[node][j] == 1 && c == color[j])
	    {
	    	 return 0;
		}
    }
    return 1;
}
/* A utility function to print solution */
int finalsol(int color[])
{
	int  node;
    printf("Solution Exists:"
           " Following are the assigned colors \n");
    for (node = 0; node < n; node++)
        printf(" %d\t ", color[node]);
    printf("\n");
}


bool graphcolouring(bool graph, int node, int color, int m)
{
    // if current index reached end
    int  c;
    if (node == n) {
    	return 1;
    }
        // if coloring is safe
        if (place(graph, color ,node, c)) {
            // Print the solution
            finalsol(color, n)
            return 1;
        }
		return 0;
    
 
    // Assign each color from 1 to m
    for (c = 1; c <= m; c++) {
        color[node] = c;
 
        // Recur of the rest vertices
        if (graphcolouring(graph, node + 1, color, m, n))
            return 1;
 
        color[node] = 0;
    }
 
    return 0;
}

// Driver program to test above function
int main()
{
	int  m, rows, cols;
	int color[n];
	bool graph[n][n];
  
	printf("Enter the size of array:");
	scanf("%d",n);
	
	for(rows = 0; rows < n; rows++)
	{
		for(cols = 0; cols < n; cols++)
		{
			scanf("%d",&graph[rows][cols]);
		}
  	
	}
	printf("Enter the number of color:");
	scanf("%d",&m);
  	for (i = 0; i < n; i++)
    {
	  color[i] = 0;
    }
 
    if (!graphcolouring(graph,  0, color, m, n))
        printf("Solution does not exist");
 
    return 0;
}

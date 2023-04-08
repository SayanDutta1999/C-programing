#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Edge{
	int source, destination, weight;
};

struct Graph{
	int V, E;
	struct Edge *edge;
};
 struct Graph * createGraph(int V, int E){
 	struct Graph *graph=(struct Graph*)malloc(sizeof(struct Graph));
 	graph->V= V;
 	graph->E= E;
 	graph->edge=(struct Edge *)malloc(E * sizeof(struct Edge));
 	
 	return graph;
 }
 void bellmanford (struct Graph *graph, int start)
 {
 	int i,j,u,v,w;
 	int V=graph->V; 
 	int E=graph->E;
 	int *distance=(int *)malloc(V * sizeof(int));
 	/*Initialization*/
 	for(i=0 ;i<V;i++)
 	{
 		distance[i]=INT_MAX;
	 }
	 distance[start]=0;
	 /*Relaxation*/
	 for(i=0;i<=V-1;i++)
	 {
	 	for(j=0;j<E;j++)
	 	{
	 	  u=graph->edge[j].source;	
	 	  v=graph->edge[j].destination;
	 	  w=graph->edge[j].weight;
	 	  
	 	  if(distance[v]> distance[u] +w)
	 	 {
	 	 	distance[v]=distance[u]+w;
		  }
		}
	 }
	 /* Cycle detection*/
	 for(j=0;j<E;j++)
	 {
	 	u=graph->edge[j].source;	
	 	v=graph->edge[j].destination;
	 	w=graph->edge[j].weight;
	 	
	 	 if(distance[v]> distance[u] +w)
	 	 {
	 	 	printf("negative cycle exists.");
		  }
		  
	 }
	 	for(i=0 ;i<V;i++)
	        printf("%d =>> %d",i,distance[i]);
 }
 int main()
 {
 	int i, V, E;
 	printf("Enter the number of vertices:");
 	scanf("%d",&V);
 	printf("Enter the number of Edges:");
 	scanf("%d",&E);
 	
 	struct Graph *graph=createGraph(V, E);
 	printf("Enter Information about edges (source, destination, weight):");
 	for(i=0;i<E;i++)
 	{
 		scanf("%d%d%d",&graph->edge[i].source,&graph->edge[i].destination,&graph->edge[i].weight);
	 }
	 
 	bellmanford (graph,0);
 	return 0;
 	
 	
 	
 }

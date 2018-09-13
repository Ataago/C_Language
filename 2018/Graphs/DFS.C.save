#include<stdio.h>
#include<conio.h>

void DFS(int n, int graph[10][10], int vist[10], int source)
{
	int i;

	vist[source] = 1;

	printf("%d-->",source);
	for(i=1; i<=n; i++)
		if( vist[i] != 1 && graph[source][i] )
			DFS(n,graph,vist,i);
}

int main()
{
	int n,i,j, graph[10][10], vist[10], source;

	printf("Enter Number of nodes: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		vist[i] = 0;

	printf("Enter source node: ");
	scanf("%d",&source);

	printf("Enter Graph Matrix: \n");
	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++)
		{
			scanf("%d",&graph[i][j]);
		}

	printf("Traversal is : ");
	DFS(n,graph,vist,source);

	printf("\nreached nodes: ");
	for(i=1;i<=n; i++)
		if(vist[i] == 1)
			printf(",%d ",i);

	return 0;
}

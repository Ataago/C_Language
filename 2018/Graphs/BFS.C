//Design devel and execute a rogram in c to implement BFS. print all the
//nodes reachable from given starting node in a digraph

#include<conio.h>
#include<stdio.h>

void BFS(int n,int graph[10][10], int source, int vist[10])
{
	int i,f=0,r=-1,q[10],v;

	printf("%d",source);
	//assigning 1 as visted else default 0
	vist[source] = 1;
	q[++r] = source;

	while(f <= r)
	{
		v = q[f++];
		for(i = 1; i<=n; i++)
		{
			if(vist[i] != 1 && graph[v][i] == 1)
			{
				q[++r] = i;
				printf("-->%d",i);
				vist[i] = 1;
			}
		}
	}
}
int main()
{
	int n,i,j,source,graph[10][10],vist[10];


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
	BFS(n,graph,source,vist);

	printf("\nreached nodes: ");
	for(i=1;i<=n; i++)
		if(vist[i] == 1)
			printf(",%d ",i);
    return 0;
}

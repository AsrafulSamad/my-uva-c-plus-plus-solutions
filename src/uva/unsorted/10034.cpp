
#include<iostream.h>
#include<math.h>


struct node{
    double x,y;
    }no[101];



int main()
{

 int t,k=0;
 scanf("%d",&t);


 while(k<t){


    int parent [101];
	int i,j,a,b,u,v,n;
	int noofedges=1;
	int visited[101];
	double min,mincost=0,cost[101][101],l,f;




for(i=0;i<101;i++)
 parent[i]=0;



//////////////////////read///////////////////////

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>no[i].x>>no[i].y;


///////////////////////cost//////////////////////

	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
	    l=no[i].x-no[j].x;
	    f=no[i].y-no[j].y;
        cost[i][j]=cost[j][i]=sqrt(pow(l,2) + pow(f,2));

		if(cost[i][j]==0)
		  cost[i][j]=999;
	}


	while(noofedges<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
		if(cost[i][j]<min)
		{
			min=cost[i][j];
			a=u=i;
			b=v=j;
		}

		while(parent[u])
		u=parent[u];

		while(parent[v])
		v=parent[v];

		if(u!=v)
		{
			noofedges++;
			mincost+=min;
			parent[v]=u;
		}
		cost[a][b]=cost[b][a]=999;
	}

printf("%.2lf\n",mincost);

    ++k;

 if(k!=t)
  printf("\n");

    }
return 0;
}

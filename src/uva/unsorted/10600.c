#include<iostream>
#include<math.h>
#define INF 999999999
using namespace std;
struct {
int s,d;
    } node[105];

int main()
{

 int t,k=0;
 scanf("%d",&t);

 while(t--){

    int parent [105];
	int i,j,a,b,u,v,n,m,e,c;
	int noofedges=1;
	int visited[105];
	double min,mincost=0,cost[105][105],l,f,min1,min2,co[105][105];


//////////////////////read///////////////////////

    cin>>n>>e; m=n-1;

for(i=0;i<=n;i++){
 parent[i]=0;
node[i].s=node[i].d=0;
}

for(i=1;i<=n;++i)
 for(j=i;j<=n;++j){
  cost[i][j]=cost[j][i]=co[i][j]=co[j][i]=INF;
 }

    for(i=1;i<=e;i++){
        cin>>j>>k>>c;
        if(cost[j][k]>c)
       cost[j][k]=cost[k][j]=co[j][k]=co[k][j]=c;
    }

///////////////////////cost//////////////////////

	while(noofedges<n)
	{
		min=INF;
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

			mincost+=min;
			parent[v]=u;
		   node[noofedges].s=a;node[noofedges].d=b;
		   noofedges++;
		}
		cost[a][b]=cost[b][a]=INF;

	}

printf("%.0lf",mincost);

///////////////////////////////////////////////second/////////////////////////////////

if(n==e+1){
 printf(" %.0lf\n",mincost);
continue;
}

min2=INF;
c=1;
while(m){
    m--;
mincost=0;

for(i=0;i<=n;i++)
 parent[i]=0;

for(i=1;i<=n;++i)
 for(j=i;j<=n;++j)
cost[i][j]=cost[j][i]=co[i][j];


cost[node[c].s][node[c].d]=cost[node[c].d][node[c].s]=INF;


noofedges=1;k=e;
	while(noofedges<n && k--)
	{

		min=INF;
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
		cost[a][b]=cost[b][a]=INF;
	}



if( min2>mincost && noofedges==n)
 min2=mincost;

cost[node[c].s][node[c].d]=cost[node[c].d][node[c].s]=co[node[c].s][node[c].d];
c++;




}

printf(" %.0lf\n",min2);

/////////////////////////////////////////////////////////////////////////////////////////

}
return 0;
}

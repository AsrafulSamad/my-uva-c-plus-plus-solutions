#include<stdio.h>
#define INF 99999

int a[25][25],n,m,i,j,visited[25],k,t,d[25],l;

void init(){
 for(i=1;i<=20;++i)
  for(j=i;j<=20;++j)
   a[i][j]=a[j][i]=0;
}

void bfs( int start )
{
	int q[25],rear=0,front=0,i1;
	q[++rear]=start;
	visited[start]=1;
    d[start]=0;
	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=20;i1++)
		{
			if(a[start][i1] && !visited[i1])
			{
			    d[i1]=d[start]+1;
 				q[++rear]=i1;
				visited[i1]=1;

			}
		}
	}
}


int main(){
t=0;

while(scanf("%d",&m)==1){

init();

for(i=1;i<=19;++i){
    if(i!=1)
     scanf("%d",&m);
    for(j=1;j<=m;++j){
        scanf("%d",&k);
         a[i][k]=a[k][i]=1;
        }
    }




printf("Test Set #%d\n",++t);
scanf("%d",&m);


for(i=1;i<=m;++i){

 for(l=1;l<=22;++l){
  visited[l]=0;
  d[l]=INF;
  }

scanf("%d%d",&j,&k);

bfs(j);

printf("%2d to %2d: %d\n",j,k,d[k]);

}

printf("\n");
}
 return 0;

}







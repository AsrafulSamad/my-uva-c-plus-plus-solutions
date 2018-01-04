#include<iostream>
#define INF 99999;

int a[35][35],n,m,i,j,visited[35],q,x,d[35],k,s;

void init(){
 for(i=1;i<=n;++i)
  for(j=i;j<=n;++j)
   a[i][j]=a[j][i]=0;
 for(i=1;i<=n;++i){
  visited[i]=0;
  d[i]=INF;
   }
      }

void bfs( int start )
{
	int q[n+2],rear=0,front=0,i1,l2=0;
	q[++rear]=start;
	visited[start]=1;
    d[start]=0;
	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=n;i1++)
		{
			if(a[start][i1] && !visited[i1])
			{   d[i1]=d[start]+1;
				q[++rear]=i1;
				visited[i1]=1;

			}
		}
	}

}

int main(){

int t,l,h,g;
char c[35][5],y[5],z[5];
scanf("%d",&t);

printf("SHIPPING ROUTES OUTPUT\n\n");

for(k=1;k<=t;++k){

printf("DATA SET  %d\n\n",k);
scanf("%d%d%d",&n,&m,&q);
init();

for(l=1;l<=n;++l)
 scanf("%s",c[l]);


for(l=1;l<=m;++l){
 scanf("%s%s",&y,&z);

for(i=1;i<=n;++i)
  if(!strcmp(c[i],y)){
      h=i;break;
      }
for(i=1;i<=n;++i)
  if(!strcmp(c[i],z)){
      g=i;break;
      }
a[h][g]=a[g][h]=1;

 }
for(j=1;j<=q;++j){

scanf("%d%s%s",&x,&y,&z);

 for(i=1;i<=n;++i){
  visited[i]=0;
  d[i]=INF;
   }
for(i=1;i<=n;++i)
  if(!strcmp(c[i],y)){
      h=i;break;
      }
for(i=1;i<=n;++i)
  if(!strcmp(c[i],z)){
      g=i;break;
      }
bfs(h);
s=d[g];
if(s==99999)
printf("NO SHIPMENT POSSIBLE\n");
else{
 x=100*s*x;
 printf("$%d\n",x);
}
 }

printf("\n");
}

printf("END OF OUTPUT\n");

    return 0;
    }

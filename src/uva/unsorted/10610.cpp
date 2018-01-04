#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
bool ad[1005][1005]; int p[1005];

void init(int n){
 for(int i2=1;i2<=n;++i2){
  for(int j2=i2;j2<=n;++j2)
      ad[i2][j2]=ad[j2][i2]=0;
      p[i2]=-1;
      }
    }

struct {
    double x,y;
    } node[1005];

void bfs( int start ,int n)
{
	int q[1005],rear=0,front=0,i1;
	bool visited[1005]={0};
	q[++rear]=start;
	visited[start]=1;
    p[start]=0;
	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=n;i1++)
		{
			if(ad[start][i1] && !visited[i1])
			{
				q[++rear]=i1;
				visited[i1]=1;
                p[i1]=start;
			}
		}
	}
}

int main(){
    char d[50];
    char a[18],b[18],x,y;
    double n,m,c,v,d1,d2;
    int l,i,j,k,z;
while(1){

    cin.getline(d,50);
     sscanf (d,"%lf %lf",&v,&m);

    if(v==0&&m==0) break;

j=0;
while(1){
cin.getline(d,50);
if(d[0]=='\0') break;
++j;

sscanf (d,"%lf %lf",&node[j].x,&node[j].y);
//printf("%lf %lf\n",node[j].x,node[j].y);

}
z=j;

//printf("%d\n",z);

if(z==1){
 printf("Yes, visiting 0 other holes.\n");
continue;
}
init(z);
d1=m*60*v*1000;
for(i=1;i<=z;++i)
 for(j=i+1;j<=z;++j){
     d2=1000*sqrt((node[i].x-node[j].x)*(node[i].x-node[j].x)+(node[i].y-node[j].y)*(node[i].y-node[j].y));
      if(d2<=d1)
       ad[i][j]=ad[j][i]=1;
}

bfs(1,z);

if(p[2]==-1)
 printf("No.\n");
else{
int count=0;
j=2;
while(1){
  if(p[j]!=1){
      j=p[j];
      ++count;
      }
   else
    break;
    }
printf("Yes, visiting %d other holes.\n",count);
  }

}
return 0;
    }


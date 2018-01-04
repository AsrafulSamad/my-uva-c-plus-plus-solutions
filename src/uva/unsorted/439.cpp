#include<stdio.h>
#define INF 99999
int a[66][66],k,l,m,t,x,y,visited[66],d[66];

struct node{
    int i,j;
    } n[65];


int find(int c,int r){
      for(l=1;l<=64;++l)
        if(n[l].i==c && n[l].j==r)
            break;
    return l;
}


void init(){
    for(k=1;k<=64;++k)
     for(l=k;l<=64;++l)
       a[k][l]=a[l][k]=0;
    }

void admatx(){
x=0;y=1;
for(k=1;k<=64;++k){
    ++x;
     n[k].i=x;
     n[k].j=y;
    if(x%8==0){
       x=0;++y;
     }
}


for(k=1;k<=64;++k){

      if( n[k].i+2<=8 && n[k].j+1<=8 ){
            m=find(n[k].i+2,n[k].j+1);
          a[k][m]=a[m][k]=1;
         }
      if( n[k].i+1<=8 && n[k].j+2<=8 ){
            m=find(n[k].i+1,n[k].j+2);
          a[k][m]=a[m][k]=1;
         }
      if( n[k].i+2<=8 && n[k].j-1>=1 ){
            m=find(n[k].i+2,n[k].j-1);
          a[k][m]=a[m][k]=1;
         }

      if( n[k].i+1<=8 && n[k].j-2>=1 ){
            m=find(n[k].i+1,n[k].j-2);
          a[k][m]=a[m][k]=1;
         }

      if( n[k].i-1>=1 && n[k].j-2>=1 ){
            m=find(n[k].i-1,n[k].j-2);
          a[k][m]=a[m][k]=1;
         }
      if( n[k].i-2>=1 && n[k].j-1>=1 ){
            m=find(n[k].i-2,n[k].j-1);
          a[k][m]=a[m][k]=1;
         }
      if( n[k].i-2>=1 && n[k].j+1<=8 ){
            m=find(n[k].i-2,n[k].j+1);
          a[k][m]=a[m][k]=1;
         }
      if( n[k].i-1>=1 && n[k].j+2<=8 ){
            m=find(n[k].i-1,n[k].j+2);
          a[k][m]=a[m][k]=1;
         }

        }

}



void bfs( int start )
{
	int q[66],rear=0,front=0,i1;
	q[++rear]=start;
	visited[start]=1;
    d[start]=0;
	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=64;i1++)
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
char c1[3],c2[3];
 admatx();

while(scanf("%s %s",&c1,&c2)==2){

l=(c1[0]-96);
m=(c1[1]-48);
k=find(l,m);

l=(c2[0]-96);
m=(c2[1]-48);
t=find(l,m);

for(l=1;l<=64;++l)
 {
  visited[l]=0;
  d[l]=INF;
  }

bfs(k);

printf("To get from %s to %s takes %d knight moves.\n",c1,c2,d[t]);





}

return 0;
}

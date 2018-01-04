#include<stdio.h>

int visited[10001],a[10001][10001];

void bfs( int start ,int k2 )
{
	int q[10001],rear=0,front=0,i1;
	q[++rear]=start;
	visited[start]=1;

	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=k2;i1++)
		{
			if(a[start][i1] && !visited[i1])
			{
				q[++rear]=i1;
				visited[i1]=1;
			}
		}
	}
}


int main(){
    char b[105][105],d;
    int k1,m1,k,i,j,m,n,s[105][105];

while(scanf("%d %d",&n,&m) &&n &&m){

  scanf("%c",&d);

for(i=1;i<=103;++i)
 for(j=1;j<=103;++j)
    s[i][j]=0;

   k=0;

  for(i=1;i<=n;++i){
   for(j=1;j<=m;++j){
     scanf("%c",&b[i][j]);
    if(b[i][j]=='@')
       s[i][j]=++k;

    }
    scanf("%c",&d);
   }

 for(i=1;i<=k;++i){
  for(j=1;j<=k;++j){
    a[i][j]=0;
  }
   visited[i]=0;
 }

 for(i=1;i<=n;++i)
  for(j=1;j<=m;++j){
   if(s[i][j]>0){

            if(j+1<=m && s[i][j+1]>0)
                     a[s[i][j]][s[i][j+1]]=a[s[i][j+1]][s[i][j]]=1;

            if(j-1>=1 && s[i][j-1]>0)
                   a[s[i][j]][s[i][j-1]]=a[s[i][j-1]][s[i][j]]=1;

            if(i+1<=n && s[i+1][j]>0)
                   a[s[i][j]][s[i+1][j]]=a[s[i+1][j]][s[i][j]]=1;
            if(i-1>=1 && s[i-1][j]>0)
                   a[s[i][j]][s[i-1][j]]=a[s[i-1][j]][s[i][j]]=1;

            if(i+1<=n && j+1<=m && s[i+1][j+1]>0)
                   a[s[i][j]][s[i+1][j+1]]=a[s[i+1][j+1]][s[i][j]]=1;
            if(i+1<=n && j-1>=1 && s[i+1][j-1]>0)
                   a[s[i][j]][s[i+1][j-1]]=a[s[i+1][j-1]][s[i][j]]=1;
            if(i-1>=1 && j+1<=m && s[i-1][j+1]>0)
                   a[s[i][j]][s[i-1][j+1]]=a[s[i-1][j+1]][s[i][j]]=1;
            if(i-1>=1 && j-1>=1 && s[i-1][j-1]>0)
                   a[s[i][j]][s[i-1][j-1]]=a[s[i-1][j-1]][s[i][j]]=1;


       }
  }

m1=0;

for(k1=1;k1<=k;++k1){
      if(visited[k1]==0){
         bfs(k1,k); ++m1;
        }
      }

printf("%d\n",m1);


}
return 0;

}

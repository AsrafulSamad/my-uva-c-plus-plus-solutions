#include<stdio.h>

int visited[650],a[650][650];

void bfs( int start ,int k2 )
{
	int q[650],rear=0,front=0,i1;
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
    char b[27][27],d;
    int k1,m1,k,i,j,n,s[27][27],t=0;

while(scanf("%d",&n)!=EOF){
   scanf("%c",&d);

for(i=1;i<=26;++i)
 for(j=1;j<=26;++j)
    s[i][j]=0;

   k=0;

  for(i=1;i<=n;++i){
   for(j=1;j<=n;++j){
     scanf("%c",&b[i][j]);
    if(b[i][j]=='1')
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
  for(j=1;j<=n;++j){
   if(s[i][j]>0){

            if(j+1<=n && s[i][j+1]>0)
                     a[s[i][j]][s[i][j+1]]=a[s[i][j+1]][s[i][j]]=1;

            if(j-1>=1 && s[i][j-1]>0)
                   a[s[i][j]][s[i][j-1]]=a[s[i][j-1]][s[i][j]]=1;

            if(i+1<=n && s[i+1][j]>0)
                   a[s[i][j]][s[i+1][j]]=a[s[i+1][j]][s[i][j]]=1;
            if(i-1>=1 && s[i-1][j]>0)
                   a[s[i][j]][s[i-1][j]]=a[s[i-1][j]][s[i][j]]=1;

            if(i+1<=n && j+1<=n && s[i+1][j+1]>0)
                   a[s[i][j]][s[i+1][j+1]]=a[s[i+1][j+1]][s[i][j]]=1;
            if(i+1<=n && j-1>=1 && s[i+1][j-1]>0)
                   a[s[i][j]][s[i+1][j-1]]=a[s[i+1][j-1]][s[i][j]]=1;
            if(i-1>=1 && j+1<=n && s[i-1][j+1]>0)
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

printf("Image number %d contains %d war eagles.\n",++t,m1);


}


return 0;
    }

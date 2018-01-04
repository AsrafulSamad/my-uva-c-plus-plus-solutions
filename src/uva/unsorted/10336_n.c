#include<stdio.h>
int visited[100],a[100][100],s[100][100];


void init(){
  int i,j;
  for(i=1;i<=100;++i){
   for(j=1;j<=100;++j){
       a[i][j]=0;
       s[i][j]=0;
     }
    visited[i]=0;
  }
}




void bfs( int start ,int k2 )
{
	int q[100],rear=0,front=0,i1;
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


  int l,t,n,m,i,j,k,b[27],v1,k1,m1,l2,i1,b1[27];
  char c[100][100],v;


scanf("%d",&t);

for(l=1;l<=t;++l){
scanf("%d %d\n",&n,&m);

k=1;

for(i=1;i<=26;++i){
  b[i]=0;
  b1[i]=i;
 }


for(i=1;i<=n;++i){
 for(j=1;j<=m;++j)
  {
    scanf("%c",&c[i][j]);
    v1= (int)c[i][j]-96;
    b[v1]=b[v1]+1;

  }
scanf("%c",&v);
}


for(i1=1;i1<=26;++i1){

 if(b[i1]>0){
   v=(char)(i1+96);


init();


k=0;
  for(i=1;i<=n;++i)
   for(j=1;j<=m;++j)
    if(c[i][j]==v)
       s[i][j]=++k;

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

         }
  }




m1=0;
for(k1=1;k1<=k;++k1){
      if(visited[k1]==0){
         bfs(k1,k); ++m1;
        }
      }
 b[i1]=m1;



  }

}




m1=0;
for(i=1;i<26;++i)
 for(j=i+1;j<=26;++j)
   if(b[i]<b[j]){
       v1=b[i];
       b[i]=b[j];
       b[j]=v1;

       v1=b1[i];
       b1[i]=b1[j];
       b1[j]=v1;

      }





printf("World #%d\n",l);
for(i=1;i<=26;++i)
 if(b[i]!=0){
    printf("%c: %d\n",b1[i]+96,b[i]);
      }

}


return 0;
}

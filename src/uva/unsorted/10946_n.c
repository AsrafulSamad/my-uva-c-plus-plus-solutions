#include<stdio.h>
int visited[6000],a[301][301],s[301][301];

void init(){
  int i,j;
  for(i=1;i<=300;++i){
   for(j=1;j<=300;++j){
       a[i][j]=0;
       s[i][j]=0;
     }
  }
  for(i=1;i<=5999;++i)
   visited[i]=0;

}

int bfs( int start , int k2 )
{

	int q[6000],rear=0,front=0,i1,st1=1;
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
				++st1;
			}
		}
	}


return st1;
}



int main(){
  int l,t,n,m,i,j,k,b[6000],v1,k1,m1,l2,i1,it,b1[28];
  char c[100][100],v,ch[6000];

 l=0;

while(1){

 scanf("%d %d",&n,&m);

 if(n==0&&m==0)
  break;

 scanf("%c",&v);

 ++l;
 it=0;

for(i=1;i<=26;++i)
  b1[i]=0;

for(i=1;i<=n;++i){
 for(j=1;j<=m;++j)
  {
    scanf("%c",&c[i][j]);
    if(c[i][j]!='.'){
     v1= (int)c[i][j]-64;
     b1[v1]=b1[v1]+1;
    }

  }
scanf("%c",&v);
}


for(i1=1;i1<=26;++i1){

 if(b1[i1]>0){
   v=(char)(i1+64);

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


for(k1=1;k1<=k;++k1){
      if(visited[k1]==0){
         ++it;
         b[it]=bfs(k1,k);
         ch[it]=i1+64;
         }

      }




  }

}


for(i=1;i<it;++i)
 for(j=i+1;j<=it;++j)
  {
      if(b[i]<b[j]){
          v1=b[i];
          b[i]=b[j];
          b[j]=v1;
          v=ch[i];
          ch[i]=ch[j];
          ch[j]=v;
          }
      else if(ch[i]>ch[j])
        {
          v1=b[i];
          b[i]=b[j];
          b[j]=v1;
          v=ch[i];
          ch[i]=ch[j];
          ch[j]=v;

          }
 }

printf("Problem %d:\n",l);

for(j=1;j<=it;++j)
 printf("%c %d\n",ch[j],b[j]);


}


return 0;
}



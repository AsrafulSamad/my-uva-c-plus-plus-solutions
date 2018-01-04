#include<stdio.h>
#include<string.h>

char b,c,v;
int a[105][105],n,m,i,j,visited[105];

void init(){
 for(i=1;i<=n;++i)
  for(j=i;j<=n;++j)
   a[i][j]=a[j][i]=0;
 for(i=1;i<=n;++i)
  visited[i]=0;

      }

void bfs( int start )
{
	int q[n+2],rear=0,front=0,i1;
	q[++rear]=start;
	visited[start]=1;

	while(rear != front)
	{
		start = q[++front];
		for(i1=1;i1<=n;i1++)
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

int t,k,k1;
char ch[20];

       gets(ch);
       sscanf(ch,"%d",&t);
       gets(ch);

for(k1=1;k1<=t;++k1){
init();
m=0;
gets(ch);

c=ch[0];
n=(int)c -(int)'A'+1;


while(gets(ch)){

       for(i = 0;ch[i]; i ++)
		  if(ch[i] == '\n') ch[i] = NULL;

if(!strlen(ch)) break;

 i=(int)ch[0] -(int)'A'+1;
 j=(int)ch[1] -(int)'A'+1;

a[i][j]=a[j][i]=1;

}

    for(k=1;k<=n;++k){
      if(visited[k]==0){
         bfs(k); ++m;
        }
      }

printf("%d\n",m);
if(k1!=t)
printf("\n");
}

return 0;

}

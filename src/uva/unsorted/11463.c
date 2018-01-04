#include<stdio.h>
#define INF 99999
#define MIN(a,b) ( a<b ? a:b )
#define MAX(a,b) ( a>b ? a:b )


int main(){
int t,a[105][105],c,n,m,i,j,k,s,d,l;

    scanf("%d",&t);
for(l=1;l<=t;++l)
{
scanf("%d%d",&n,&m);

for(i=0;i<=100;++i)
 for(j=0;j<=100;++j)
  a[i][j]=INF;

for(i=1;i<=m;++i)
 {
     scanf("%d%d",&j,&k);
     a[j][k]=a[k][j]=1;
  }
scanf("%d%d",&s,&d);

for(k=0;k<n;++k)
 for(i=0;i<n;++i)
  for(j=0;j<n;++j)
   if(i!=j && a[i][k]!=INF && a[k][j]!=INF){
       a[i][j]=MIN(a[i][j],a[i][k]+a[k][j]);
    }

c=0;
if(n!=2){
for(i=0;i<n;++i)
  if(s!=i && d!=i)
   c=MAX(c,a[s][i]+a[i][d]);
}

else
c=a[s][d];

printf("Case %d: %d\n",l,c);

}

return 0;

}

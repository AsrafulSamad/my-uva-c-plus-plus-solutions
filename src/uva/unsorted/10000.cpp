#include<cstdio>

int main(){
int a[103][103],i,j,u,v,k,c,m,kase=0,n;
while(scanf("%d",&n) && n){

scanf("%d",&m);

for(i=1;i<=n;++i)
 for(j=1;j<=n;++j)
  a[i][j]=0;


while(scanf("%d%d",&u,&v)){
  if(u==0&&v==0)break;
a[u][v]=1;
 }


for(k=1;k<=n;++k)
 for(i=1;i<=n;++i)
  for(j=1;j<=n;++j)
    if(a[i][k]!=0 && a[k][j]!=0)
     if(a[i][k]+a[k][j]>a[i][j]){
          a[i][j]=a[i][k]+a[k][j];
}

int max=0;
j=m;
for(i=1;i<=n;++i)
  if(a[m][i]>max){
      max=a[m][i];
      j=i;
      }

printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++kase,m,max,j);

}
return 0;
    }

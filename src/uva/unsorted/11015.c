#include<stdio.h>
#define INF 999999999
#define MIN(a,b) ( a<b ? a:b )


int main(){
    int n,m,a[25][25],i,j,k,d,t,tf,l=0;
    char na[25][15],c;

while(scanf("%d %d",&n,&m)&&n){
        scanf("%c",&c);

for(i=1;i<=22;++i){
 for(j=1;j<=22;++j)
  a[i][j]=INF;
   a[i][i]=0;
  }

       for(i=1;i<=n;++i)
         gets(na[i]);

       for(i=1;i<=m;++i)
        {
            scanf("%d %d %d",&j,&k,&d);
            if(a[j][k]>d)
             a[j][k]=a[k][j]=d;
        }


 for(k=1;k<=n;++k)
  for(i=1;i<=n;++i)
   for(j=1;j<=n;++j)
    if(i!=j && a[i][k]!=INF && a[k][j]!=INF && i!=k && k!=j)
      a[i][j]=MIN(a[i][j],a[i][k]+a[k][j]);

tf=INF;k=1;
for(i=1;i<=n;++i){
  t=0;
  for(j=1;j<=n;++j)
    t=t+a[j][i];
  if(tf>t){
    k=i;
    tf=t;
    }
  }

++l;
printf("Case #%d : %s\n",l,na[k]);

}

return 0;
}

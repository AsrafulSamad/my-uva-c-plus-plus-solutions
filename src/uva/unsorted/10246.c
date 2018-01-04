#include<stdio.h>
#define INF 999999999
#define MIN(a,b) ( a<b ? a:b )
#define MAX(a,b) ( a>b ? a:b )

int main(){
    int i,j,k,d,a[85][85],l=1,n,m,q,mc[85],larg[85][85];
    while(scanf("%d%d%d",&n,&m,&q)==3){
 if(n==0 && m==0 && q==0) break;
     for(i=1;i<=n;++i){
       for(j=1;j<=n;++j){
         a[i][j]=INF;
        }
       a[i][i]=0;
     }
    for(i=1;i<=n;++i)
     scanf("%d",&mc[i]);

    for(i=1;i<=m;++i){
     scanf("%d%d%d",&j,&k,&d);
     if(a[j][k]>d)
       a[j][k]=a[k][j]=d;
    }
 for(i=1;i<=n;++i)
   for(j=1;j<=n;++j)
    larg[i][j]=MAX(mc[i],mc[j]);

  for(k=1;k<=n;++k)
    for(i=1;i<=n;++i)
      for(j=1;j<=n;++j){
            if( ( a[i][j] + larg[i][j] ) > ( a[i][k] + a[k][j] + MAX(larg[i][k], larg[k][j]) ) ){
                a[i][j]=a[i][k] + a[k][j];
                larg[i][j]=MAX(larg[i][k], larg[k][j]);
             }
   }

  for(k=1;k<=n;++k)
    for(i=1;i<=n;++i)
      for(j=1;j<=n;++j){
            if( ( a[i][j] + larg[i][j] ) > ( a[i][k] + a[k][j] + MAX(larg[i][k], larg[k][j]) ) ){
                a[i][j]=a[i][k] + a[k][j];
                larg[i][j]=MAX(larg[i][k], larg[k][j]);
             }
     }

if(l>1)
 printf("\n");
printf("Case #%d\n",l);
for(i=1;i<=q;++i){
    scanf("%d%d",&j,&k);
    if(a[j][k]+larg[j][k]>=INF)
      printf("-1\n");
     else
     printf("%d\n",a[j][k]+larg[j][k]);
  }
++l;
}
return 0;
    }


#include<stdio.h>
#define INF 21474836


int main(){

   int a[104][104],p,q,i,k,j,n,m,kase=0;
   float f;
   while(scanf("%d%d",&p,&q) &&p &&q ){

      n=0;
      for(i=1;i<=103;++i)
       for(j=1;j<=103;++j)
         a[i][j]=INF;

         a[p][q]=1;

       if(n<p)
         n=p;
       if(n<q)
         n=p;

      while(scanf("%d%d",&p,&q) &&p &&q){

         a[p][q]=1;

         if(n<p)
           n=p;
         if(n<q)
          n=p;

         }


for(k=1;k<=n;++k)
 for(i=1;i<=n;++i)
  for(j=1;j<=n;++j)
    if(a[i][k]!=INF && a[k][j]!=INF && i!=j){
        if(a[i][j]>a[i][k]+a[k][j])
          a[i][j]=a[i][k]+a[k][j];
        }


m=0; int sum=0;
for(i=1;i<=n;++i)
 for(j=1;j<=n;++j){
     if(a[i][j]!=INF){
     sum+=a[i][j];
     ++m;
     }
     }

f=( float )(sum*1.0)/m;

printf("Case %d: average length between pages = %.3f clicks\n",++kase,f);
       }
    return 0;
    }

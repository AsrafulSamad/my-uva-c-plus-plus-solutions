#include<stdio.h>
#include<string.h>
#define INF 99999
#define MIN(a,b) ( a<b ? a:b )
#define MAX(a,b) ( a>b ? a:b )

int main(){
    char c[202][31],a[31],b[31];

    int n,m,i,j,k,cost[202][202],x,y,p=1;


while(scanf("%d%d",&n,&m)&&n &&m){

      for(i=1;i<=n;++i)
        strcpy(c[i],"0");


      for(i=1;i<=n;++i)
       for(j=1;j<=n;++j)
        cost[i][j]=cost[j][i]=INF;



      for(i=1;i<=m;++i){
           scanf("%s %s %d",&a,&b,&k);

            for(j=1;j<=n;++j){
                 if(!strcmp(c[j],a))
                   {
                       x=j;
                       break;
                       }

                 if(!strcmp(c[j],"0"))
                    {
                     x=j;
                     strcpy(c[j],a);
                     break;
                     }

                }

            for(j=1;j<=n;++j){
                 if(!strcmp(c[j],b))
                   {
                     y=j;
                     break;
                     }

                 if(!strcmp(c[j],"0"))
                    {
                     y=j;
                     strcpy(c[j],b);
                     break;
                     }

                }


             cost[x][y]=cost[y][x]=k;

           }



for(k=1;k<=n;++k)
 for(i=1;i<=n;++i)
  for(j=1;j<=n;++j){
   if(i!=j && cost[i][k]!=INF && cost[k][j]!=INF && cost[i][j]==INF )
     cost[i][j]=MIN(cost[i][k],cost[k][j]);
   else if(i!=j && cost[i][k]!=INF && cost[k][j]!=INF )
     cost[i][j]=MAX(cost[i][j],MIN(cost[i][k],cost[k][j]));

  }

scanf("%s %s",&a,&b);

  for(i=1;i<=n;++i)
      if(!strcmp(c[i],a))
        {x=i;break;}

for(i=1;i<=n;++i)
      if(!strcmp(c[i],b))
        {y=i;break;}




printf("Scenario #%d\n",p);
printf("%d tons\n\n",cost[x][y]);
++p;


    }


    return 0;
    }

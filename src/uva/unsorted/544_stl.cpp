#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<iostream>
#define INF 99999

#define MIN(a,b) ( a<b ? a:b )
#define MAX(a,b) ( a>b ? a:b )

using namespace std;


int main(){

    map< string , int > ma;
    map< string , int > :: iterator it;
    char a[31],b[31];

    int n,m,i,j,k,cost[202][202],p=1,u,v;


while(scanf("%d%d",&n,&m)&&n &&m){


      for(i=1;i<=n;++i)
       for(j=1;j<=n;++j)
        cost[i][j]=cost[j][i]=INF;


        int nod=0,f;

        for(i=1;i<=m;++i){
            scanf("%s %s %d",a,b,&k);

             f=0;
            for(it=ma.begin();it!=ma.end();++it)
                 if(!strcmp(it->first.c_str(),a)){
                       u=it->second;f=1;break;
                            }
            if(f==0){
                ma.insert(make_pair(a,++nod));
                u=nod;
                   }

               f=0;
           for(it=ma.begin();it!=ma.end();++it)
                 if(!strcmp(it->first.c_str(),b)){
                      v=it->second;f=1;break;
                      }


            if(f==0){
                ma.insert(make_pair(b,++nod));
                v=nod;
                }

       cost[u][v]=cost[v][u]=k;

           }



for(k=1;k<=n;++k)
 for(i=1;i<=n;++i)
  for(j=1;j<=n;++j){
   if(i!=j && cost[i][k]!=INF && cost[k][j]!=INF && cost[i][j]==INF )
     cost[i][j]=MIN(cost[i][k],cost[k][j]);
   else if(i!=j && cost[i][k]!=INF && cost[k][j]!=INF )
     cost[i][j]=MAX(cost[i][j],MIN(cost[i][k],cost[k][j]));
  }




cin>>a>>b;

     u=ma[a];
     v=ma[b];



printf("Scenario #%d\n",p);
printf("%d tons\n\n",cost[u][v]);
++p;

 ma.clear();

}


    return 0;
    }

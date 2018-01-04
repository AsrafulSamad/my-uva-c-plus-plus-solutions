#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<map>
#include<queue>
#include<stack>

using namespace std;

#define max_v 110
#define inf 99999

int res[max_v][max_v],mf,f,s,t;

vector<int> p;

void augment(int v,int minedge){
    if(v==s){
        f=minedge;
        return;
        }
    else if(p[v]!=-1){
        augment(p[v],min(minedge,res[p[v]][v]));
        res[p[v]][v]-=f; res[v][p[v]]+=f;
        }
    }




int main(){

  int N,E,w,v1,v2,kase=1;

  while(scanf("%d",&N) && N ){

  scanf("%d %d %d",&s,&t,&E);

  for(int i=1;i<=N;i++)
   for(int j=i;j<=N;j++)
      res[i][j]=res[j][i]=0;

  for(int i=1;i<=E;i++){
    scanf("%d %d %d",&v1,&v2,&w);
    if(res[v1][v2] <inf){
        res[v1][v2]+=w;
        res[v2][v1]+=w;
        continue;
       }

    res[v1][v2]=w;
    res[v2][v1]=w;
   }




  mf=0;
  while(1){
    f=0;
    vector<int> dist(N+1,inf);
    dist[s]=0;
    queue<int> q;
    q.push(s);

    p.assign(N+1,-1);

    while(!q.empty()){
           int u=q.front();
           q.pop();
           if(u==t) break;
           for(int v=1;v<=N;v++)
             if(res[u][v]>0 && dist[v]==inf)
              dist[v]=dist[u]+1,q.push(v),p[v]=u;


        }

       augment(t,inf);
       if(f==0)
         break;
       mf+=f;

      }
    printf("Network %d\n",kase++);
    printf("The bandwidth is %d.\n\n",mf);

  }
  return 0;

 }

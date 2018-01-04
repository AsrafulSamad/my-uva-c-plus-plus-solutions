#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>

using namespace std;


#define max 2005
#define pi pair<int,int>
#define INF 1<<20

int N,M,Q,u,v,s,e,K;
bool visited[max],isair[max];
int cost[max];
vector<int>G[max];

struct comp {
    bool operator() (const pi &a, const pi &b) {
        return a.second > b.second;
    }
};

void inline init(){

    for(int i=1;i<=N;i++){
        visited[i]=0;
       cost[i]=INF;
       }

    }



void bfs(int start){
      priority_queue< pi, vector< pi >, comp > q;

      if(isair[start])
        cost[start]=0;
      else
        cost[start]=1;

      q.push(pi(start,cost[start]));

      while(!q.empty()){
          u=q.top().first;
          q.pop();
          for(int i=0;i<G[u].size();i++){
               v=G[u][i];
              if(visited[v] ==0){
                  if(isair[v] && cost[v]> cost[u] ){
                      cost[v]=cost[u];
                      q.push(pi(v, cost[v] ) );
                      }
                  else if(!isair[v] && cost[v]>cost[u]+1 ){
                       cost[v]=cost[u]+1;
                       q.push(pi(v, cost[v] ) );
                      }
                }
              }
         visited[u]=1;
          }
    }





int main(){

   int t,kase=0;
   scanf("%d",&t);
   while(t--){

    scanf("%d %d %d",&N,&M,&K);
    for(int i=1;i<=N;i++)
     isair[i]=0;

    for(int i=1;i<=K;i++){
      scanf("%d",&u);
      isair[u]=1;
     }

   for(int i=1;i<=M;i++){
       scanf("%d %d",&u,&v);
       G[u].push_back(v);
       G[v].push_back(u);
       }

    scanf("%d",&Q);
 printf("Case %d:\n",++kase);
    while(Q--){
        scanf("%d %d",&s,&e);


        if(s==e)
          {
              printf("0\n");
              continue;

              }
        init();
        bfs(s);

        if(cost[e]==INF )
          printf("-1\n");
        else
          printf("%d\n",cost[e]);

    }

printf("\n");

for(int i=1;i<=N;i++)
  G[i].clear();
 }

 return 0;

}




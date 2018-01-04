#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<queue>
#include<stack>

using namespace std;

#define INF 1<<20
#define pb(x) push_back(x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define max 50
//#define fil() freopen("in.txt","r",stdin)

vector < unsigned int > G[max];

unsigned int N,E,u,v,cost[max];
bool visited[max];

void init(){
    for(unsigned int i=1;i<=N;++i){
     visited[i]=0;
     cost[i]=INF;
    }
}

void bfs(unsigned int start){

  queue<unsigned int>q;

  q.push(start);
  cost[start]=0;
  visited[start]=1;

  while(!q.empty()){

   u=q.front();
   q.pop();
   for(int i=0;i<G[u].size();++i){
      if(visited[G[u][i]]==0 ){
         q.push(G[u][i]);
         visited[G[u][i]]=1;
         cost[G[u][i]]=cost[u]+1;
         }

      }

    }

}



int main(){

unsigned int i,j,k,c,end,u1,v1,kase=0,x,y;
map<unsigned int,unsigned int> mp;

//fil();

while(scanf("%u",&E) && E){

j=0;

for(i=1;i<=E;++i){
    scanf("%u%u",&u,&v);
  if(u==v) {
     if(mp[u]);
     else
       mp[u]=++j;
      continue;
    }
    if(mp[u])
      u1=mp[u];
    else{
      mp[u]=++j;
      u1=j;
      }
    if(mp[v])
      v1=mp[v];
    else{
      mp[v]=++j;
      v1=j;
      }

    G[u1].pb(v1);
    G[v1].pb(u1);

    }

N=j;

while(scanf("%u %u",&x,&y)){
    if(x==0 && y==0) break;

  init();
 if(mp[x])
  bfs(mp[x]);

u1=0;
for(i=1;i<=N;++i)
  if(cost[i]>y)
     ++u1;

printf("Case %u: %u nodes not reachable from node %u with TTL = %u.\n",++kase,u1,x,y);

}


mp.clear();
for(i=0;i<=N;++i)
 G[i].clear();

}

 return 0;
}













#include<stdio.h>
#include<vector>
#include<iostream>
#include<queue>
#include<stdlib.h>

using namespace std;

#define INF 1<<20
#define pi pair<int,int>
#define MAX 30002
#define pb(x) push_back(x)
//#define fl() freopen("in.txt","r",stdin)

vector < int > G[MAX];

int N,M,E,u,v,w,visited[MAX],d[MAX];

void init(){
    for(int i=1;i<=N;++i){
         visited[i]=0;
         d[i]=-1;
         G[i].clear();
        }
        M=0;
}

void bfs(int start){

  queue<int>q;

  q.push(start);
  d[start]=0;
  visited[start]=1;
  w=0;
  while(!q.empty()){
   ++w;
   u=q.front();
   q.pop();
   for(int i=0;i<G[u].size();++i){
      if(visited[G[u][i]]==0 ){
         q.push(G[u][i]);
         visited[G[u][i]]=1;
         d[G[u][i]]=d[u]+1;

         }

      }

    }

 if(w>M)
   M=w;
}


int main(){

int t;
//fl();

scanf("%d",&t);

while(t--){



scanf("%d %d",&N,&E);

  init();

for(int i=1;i<=E;++i){
    scanf("%d%d",&u,&v);
    G[u].pb(v);
    G[v].pb(u);
  }

for(int i=1;i<=N;++i){
    if(d[i]<0)
       bfs(i);
    }

printf("%d\n",M);

}

    return 0;
    }

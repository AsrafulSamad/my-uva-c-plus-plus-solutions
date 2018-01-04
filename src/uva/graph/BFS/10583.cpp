#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

#define INF 1<<20
#define pb(x) push_back(x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define max 50005
#define fil() freopen("in.txt","r",stdin)

using namespace std;

vector < int > G[max];
int  N,E,u,v;
bool visited[max];

void init(){
    for(int i=0;i<=max;++i){
     visited[i]=0;
    }
}

void bfs(int start){
  queue<int>q;
  q.push(start);
  visited[start]=1;

  while(!q.empty()){
   u=q.front();
   q.pop();
   for(int i=0;i<G[u].size();++i){
      if(visited[G[u][i]]==0 ){
         q.push(G[u][i]);
         visited[G[u][i]]=1;
         }
      }
    }
}



int main(){

int i,j,k,c,end,kase=0;

//fil();

while(scanf("%d %d",&N,&E)){
   if(N==0 && E==0) break;
     ++kase;

for(i=1;i<=E;++i){
    scanf("%d%d",&u,&v);
    G[u].pb(v);
    G[v].pb(u);
    }

init();
c=0;
for(int i=1;i<=N;++i)
   if(visited[i]==0){
       ++c;
       bfs(i );
    }

printf("Case %d: %d\n",kase,c);

for(int i=1;i<N;++i)
  G[i].clear();

}

  return 0;
}

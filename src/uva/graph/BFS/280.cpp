#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>

#define INF 1<<20
#define pb(x) push_back(x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define max 102
#define fil() freopen("in.txt","r",stdin)

using namespace std;

vector < int > G[max];
vector<bool>p(max);
int N,E,u,v;
bool visited[max];

void init(){
    for(int i=1;i<=N;++i){
     visited[i]=0;
       p[i]=0;
    }
}

void bfs(int start){
  queue<int>q;
  q.push(start);

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

int i,c;

while(scanf("%d",&N)&&N ){

while(scanf("%d",&u)&&u ){
     while(scanf("%d",&v)&&v )
                 G[u].pb(v);
    }




scanf("%d",&v);

while(v--){
    scanf("%d",&u);
    init();
    bfs(u);

    for(i=1;i<=N;++i){
       if(visited[i]==0)
           p[i]=1;
       }

c=0;
for(i=1;i<=N;++i){
  if(p[i]==1)
     ++c;
      }

printf("%d",c);
for(i=1;i<=N;++i)
  if(p[i]==1)
    printf(" %d",i);
printf("\n");


 }

for(i=1;i<=N;++i )
      G[i].clear();

 }
  return 0;
}

#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

#define INF 1<<20
#define pb(x) push_back(x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define max 2550
#define fil() freopen("in.txt","r",stdin)

using namespace std;

vector < int > G[max];
int N,E,u,v,ft,mx,cost[max],d[max];
bool visited[max];

void init(){
    for(int i=0;i<=N;++i){
     visited[i]=0;cost[i]=0;d[i]=0;
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
         cost[G[u][i]]=cost[u]+1;
         }
      }
    }
}



int main(){

int i,j,k,c,end,T,da;

scanf("%d",&N);

for(i=0;i<N;++i){
    scanf("%d",&E);
    for(int j=1;j<=E;++j) {
         scanf("%d",&v);
         G[i].pb(v);
       }
    }


scanf("%d",&T);

while(T--){
    ft=0;mx=0;
scanf("%d",&u);
 init();
 bfs(u);


for(int i=0;i<N;++i){
    ++d[cost[i]];
       if(cost[i]>mx)
        mx=cost[i];
       }
  da=mx;
  mx=0;

for(int i=1;i<=da;++i)
   if(d[i]>mx){
         mx=d[i];
         ft=i;
        }

      if(d[1] ==0)
        printf("0\n");
       else
        printf("%d %d\n",mx,ft );


}
  return 0;
}

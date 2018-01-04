#include<iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<cstdio>

using namespace std;

#define edge pair< int, int >
#define MAX 10500
#define pb(x) push_back(x)


vector < int > G[MAX];
vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], total, N, E,numair,visited[MAX],u,v;

////////////////////////////////////////////////////////////////////////////////////

void init(){
    for(int i=1;i<=N;++i){
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


////////////////////////////////////////////////////////////////////////////////////


int findset(int x, int *parent)
    {
        if(x != parent[x])
            parent[x] = findset(parent[x], parent);
        return parent[x];
       }

void reset()
  {
    for(int i=0; i<=N; i++) {
        parent[i] = i;
        G[i].clear();
     }
  }

void kruskal()
  {
   int i, pu, pv,c=0;
   sort(GRAPH.begin(), GRAPH.end());

   for(i=total=0; i<E; i++)
    {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);
     if(pu != pv)
         {
          MST.push_back(GRAPH[i]);
          total += GRAPH[i].first;
          parent[pu] = parent[pv];
          ++c;
          }
          if(c==N-1) break;
        }
    }


 int main()
  {
    int i, u, v,w,kase,aircost,totalcost,cs=0;


    scanf("%d",&kase);

while(kase--){
           numair=0;

    scanf("%d %d %d",&N,&E,&aircost);

    for(i=0; i<E; i++)
     {
       scanf("%d %d %d", &u, &v, &w);
       G[u].pb(v);
       G[v].pb(u);
       GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
       }

///////////////////////////

     numair=0;
     init();
     for( i=1;i<=N;++i){
            if(visited[i]==0){
                     ++numair;
                      bfs(i );
            }
     }

///////////////////////////

     reset();
     kruskal();


totalcost=numair*aircost+total;


int Siz=MST.size();

for( i=Siz-1;i>=0 ;i--){
         if( MST[i].first>=aircost  ){
              totalcost= totalcost-MST[i].first+aircost;
              ++numair;
            continue;
            }
        break;
     }

printf("Case #%d: %d %d\n",++cs,totalcost,numair);

     GRAPH.clear();
     MST.clear();

 }

     return 0;
    }

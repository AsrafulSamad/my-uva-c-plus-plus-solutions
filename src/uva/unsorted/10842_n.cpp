#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

#define edge pair< int, int >
#define MAX 110


using namespace std;
vector< pair < double, edge > > GRAPH,G;


int parent[MAX],N, E , e;

 int findset(int x, int *parent)
  {
   if(x != parent[x])
    parent[x] = findset(parent[x], parent);

   return parent[x];
  }

void kruskal()
 {
   int i, pu, pv;

   sort( GRAPH.begin(), GRAPH.end() );


  for(i=e-1; i>=0; --i)
   {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);

    if(pu != pv){
     parent[pu] = parent[pv];
     G.push_back(GRAPH[i]);
     }

  }

}

void print(){
    int min= 2000;
   for(int i=0;i<G.size();++i)
      if(G[i].first<min)
        min=G[i].first;

   printf(" %d\n",min);

    }


 void reset()
  {

  for(int i=0; i<=N; i++)
      parent[i] = i;

  }


int main()
{

int i, u, v ,j , t, w ,ka=0,min;

scanf("%d",&t);

while(t--){
e=0;
scanf("%d%d",&N,&E);
min=2000;
reset();

for(i=1;i<=E;++i){
    scanf("%d%d%d",&u,&v,&w);

    if(u==v){
        if(min>w)
         min=w;
        continue;
        }
      ++e;
     GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
    }



printf("Case #%d:",++ka);

  if(e==0){
   printf(" %d\n",min);
    continue;
  }

  kruskal();

  print();

GRAPH.clear();
G.clear();

}
return 0;
}

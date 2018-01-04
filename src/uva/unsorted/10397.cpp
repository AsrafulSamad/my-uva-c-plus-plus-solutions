#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

#define dis(x1,y1,x2,y2) (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)))
#define edge pair< int, int >
#define MAX 1001


using namespace std;

vector< pair < double,double > > cor;
vector< pair < double, edge > > GRAPH;

bool no[1001][1001];

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
   double cost=0.0;

   sort(GRAPH.begin()+e, GRAPH.end()); // increasing weight

  for(i=0; i<E; i++)
   {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);

    if(pu != pv){
     parent[pu] = parent[pv];

    if(i>=e)
     cost+=GRAPH[i].first;

    }
  }

printf("%.2lf\n",cost);

}

 void reset()
  {

  for(int i=0; i<=N; i++){
    for(int j=i;j<=N;++j)
        no[i][j]=no[j][i]=0;
      parent[i] = i;
    }

  }


int main()
{

int i, u, v ,j;
double  w;
double x,y;

while(scanf("%d",&N)!=EOF){

reset();

for(i=0; i<N; i++){
 scanf("%lf%lf",&x,&y);
 cor.push_back( pair< double,double >(x,y) );

}

scanf("%d",&e);

for(i=1;i<=e;++i){
    scanf("%d%d",&u,&v);
     w=dis(cor[u-1].first,cor[u-1].second,cor[v-1].first,cor[v-1].second);
     GRAPH.push_back(pair< double, edge >(w, edge(u-1, v-1)));
     no[u-1][v-1]=no[v-1][u-1]=1;
  }

E=0;
for(i=0;i<N;++i)
 for(j=i+1;j<N;++j){
     if(no[i][j]!=1){
         w=dis(cor[i].first,cor[i].second,cor[j].first,cor[j].second);
         GRAPH.push_back(pair< double, edge >(w, edge(i, j)));
         }

     ++E;
     }

  kruskal();

GRAPH.clear();
cor.clear();

}
return 0;
}

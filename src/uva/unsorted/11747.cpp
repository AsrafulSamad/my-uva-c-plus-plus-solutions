#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 1001

// ( w (u, v) ) format
vector< pair< unsigned long, edge > > GRAPH,G;
int parent[MAX], total, N, E;

int findset(int x, int *parent)
{
if(x != parent[x])
parent[x] = findset(parent[x], parent);
return parent[x];
}

void kruskal()
{
int i, pu, pv;
sort(GRAPH.begin(), GRAPH.end()); // increasing weight
for(i=total=0; i<E; i++)
{

pu = findset(GRAPH[i].second.first, parent);
pv = findset(GRAPH[i].second.second, parent);

if(pu != pv)
parent[pu] = parent[pv];
else
G.push_back(GRAPH[i]);
}

}

void reset()
{
for(int i=0; i<=N; i++) parent[i] = i;
}

void print()
{
int i, sz;
sort(G.begin(), G.end());
sz = G.size();
if(sz==0)
printf("forest\n");
else{
for(i=0;i<sz;++i){
printf("%lu",G[i].first);
if(i!=sz-1) printf(" ");
}
printf("\n");
}

}

int main()
{
int i, u, v ;
unsigned long w;
int min1,f=0;


while(scanf("%d %d",&N,&E)){
if(N==0 && E==0) break;
min1=0;


for(i=0; i<E; i++)
{
scanf("%d %d %lu", &u, &v, &w);
GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
}
reset();

kruskal();

print();

GRAPH.clear();
G.clear();
}
return 0;
}

#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<map>


using namespace std;

#define edge pair< int, int >
#define MAX 200005
#define fl() freopen("input.txt","r",stdin)

vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], total, N, E,c;

int findset(int x, int *parent)
    {
        if(x != parent[x])
            parent[x] = findset(parent[x], parent);
        return parent[x];
       }

void reset()
  {
    for(int i=0; i<=N; i++) parent[i] = i;
  }

void kruskal()
  {
   int i, pu, pv;
   c=0;
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

    int i, u, v,w;
    map<string,int> a;
    string x,y;

   while(1){

    cin>>N>>E;


if (N==0 && E==0) break;

   for(i=1;i<=N;++i){
       cin>>x;
       a[x]=i;
       }

   for(i=0; i<E; i++)
     {
       cin>>x>>y>>w;
       u=a[x];
       v=a[y];
       GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
       }

     cin>>x;

     reset();
     kruskal();

    if(c<N-1)
      printf("Impossible\n");
    else
      printf("%d\n",total);

     a.clear();
     GRAPH.clear();
     MST.clear();
   }

     return 0;
    }

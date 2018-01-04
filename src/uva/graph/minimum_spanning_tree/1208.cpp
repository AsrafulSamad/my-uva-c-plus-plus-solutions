#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>



using namespace std;

#define edge pair< int, int >
#define max 50


vector< pair< int, edge > > GRAPH , MST;
vector<int>G[max];




int parent[max],N, E,c;




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

     }
  }

void kruskal()
  {
   int i, pu, pv;
   c=0;
   sort(GRAPH.begin(), GRAPH.end());

   for(i=0; i<E; i++)
    {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);
     if(pu != pv)
         {

          MST.push_back(pair< int, edge >(GRAPH[i].first, edge(GRAPH[i].second.first,GRAPH[i].second.second)));
          parent[pu] = parent[pv];

          ++c;

         }
          if(c==N-1) {
               break;
              }
        }
    }





 int main()
  {

   int t,i,j, u, v,w,x,y,f;
   cin>>t;

   for(int kase=1;kase<=t;kase++){

      cin>>N;
      E=0;
    for(i=1;i<=N;i++){
     for(j=1; j<N;j++)
       {
        scanf("%d, ",&w);
        if(j>i && w>0 ){
          GRAPH.push_back(pair< int, edge >(w, edge(i,j)));
          ++E;
          }
       }
        scanf("%d",&w);
        if(j>i && w>0 ){
          GRAPH.push_back(pair< int, edge >(w, edge(i,j)));
          ++E;
            }

       }

        reset();
        kruskal();

        printf("Case %d:\n",kase);

       for(i=0;i<MST.size();i++)
           printf("%c-%c %d\n",MST[i].second.first+64,MST[i].second.second+64,MST[i].first);







/*
    for(int i=0;i<MST[i].size()-1;i++ )
      for(int j=i+1;j<MST[i].size();j++){
          if(MST[sor[i]].first== MST[sor[j]].first){
                if(MST[sor[i]].second.first > MST[sor[j]].second.first ){
                    int inter=sor[i];
                         sor[i]=sor[j];
                         sor[j]=inter;

                    }
                else if(MST[sor[i]].second.first==MST[sor[j]].second.first)
                      if(MST[sor[i]].second.first > MST[sor[j]].second.first)

              }

          }
*/



     GRAPH.clear();
     MST.clear();



   }



     return 0;
    }

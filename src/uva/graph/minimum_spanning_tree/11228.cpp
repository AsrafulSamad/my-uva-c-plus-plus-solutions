#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>



using namespace std;

#define edge pair< int, int >
#define dis(x1,y1,x2,y2) sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2) )
#define max 1005


vector< pair< double, edge > > GRAPH ;

int parent[max], total, N, E,c,nr;
double roadc,railc,cost,dist;

struct nod{
    double x,y;

    } nodd[max];


int findset(int x, int *parent)
    {
        if(x != parent[x])
            parent[x] = findset(parent[x], parent);
        return parent[x];
       }

void reset()
  {
    nr=0;
    railc=roadc=0;
    for(int i=0; i<=N; i++) parent[i] = i;
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

          if( GRAPH[i].first<=cost )
             roadc+=GRAPH[i].first;
          else {
             railc+=GRAPH[i].first;
             ++nr;
            }
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

    int i,t, u, v,w,x,y,f,j;
    cin>>t;

    for(int kase=1;kase<=t;++kase)
    {

      cin>>N>>cost;
      for(i=1;i<=N;i++)
        cin>>nodd[i].x>>nodd[i].y;
     E=0;
     for(i=1; i<N; i++)
       for(j=i+1;j<=N;j++)
       {
       dist=dis(nodd[i].x,nodd[i].y,nodd[j].x,nodd[j].y);
       ++E;
       GRAPH.push_back(pair< double, edge >(dist, edge(i,j)));

       }


     reset();
     kruskal();

     printf("Case #%d: %d %.0lf %.0lf\n",kase,nr+1,roadc,railc);

     GRAPH.clear();



   }



     return 0;
    }

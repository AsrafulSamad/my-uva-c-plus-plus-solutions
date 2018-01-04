#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>



using namespace std;

#define edge pair<unsigned  int, unsigned int >
#define max 1000001


vector< pair< unsigned int, edge > > GRAPH ;



unsigned int parent[max] ;
unsigned int N,E,c,maximum;

bool visited[max];

void init(){

    for(unsigned int i=0;i<=N;++i){

     visited[i]=0;

    }
}



unsigned int  findset(unsigned int x,unsigned  int *parent)
    {
        if(x != parent[x])
            parent[x] = findset(parent[x], parent);
        return parent[x];
       }


void reset()
  {
    for(unsigned int i=0; i<=N; i++) parent[i] = i;
  }


void kruskal()
  {
  unsigned  int i, pu, pv;
   c=0;
   sort(GRAPH.begin(), GRAPH.end());

   for(i=0; i<E; i++)
    {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);
     if(pu != pv)
         {
          parent[pu] = parent[pv];
          ++c;
         }
          if(c==N-1) {
              maximum=GRAPH[i].first;
               break;
              }
        }
    }


 int main()
  {

    unsigned int i, u, v,w,x,y;
    N=0;
   while(cin>>N>>E){

       if(N==0 &&E ==0)
          break;
     vector < unsigned int > G[N+1];

     for(i=0; i<E; i++)
       {
        cin>>u>>v>>w;
        if(u!=v){
          G[u].push_back(v);
          G[v].push_back(u);
          GRAPH.push_back(pair< unsigned int, edge >(w, edge(u, v)));
         }
       }

     maximum=0;
     init();





             queue<unsigned int>q;
             q.push(0);

             visited[0]=1;
             c=1;

          while(!q.empty()){
                 u=q.front();
                  q.pop();
             for(unsigned int i=0;i<G[u].size();++i){
                 if(visited[G[u][i]]==0 ){
                    q.push(G[u][i]);
                    visited[G[u][i]]=1;
                   //cout<<G[u][i]<<" ";
                  ++c;
                 }
                }
             }



        if(c<N){
           cout<<"IMPOSSIBLE"<<endl;
           GRAPH.clear();
           continue;
          }


     reset();
     kruskal();

     cout<<maximum<<endl;

     GRAPH.clear();



   }



     return 0;
    }

#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;

#define MAX 251
#define INF 1<<20
#define pii pair< int,int >


vector<pii>G[MAX];

int N,C;
int cost[MAX];
bool visited[MAX];

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};



void inline init(){
    int m=N>>1;
    for(int i=0;i<=m;i++)
    {
        visited[i]=visited[N-i]=0;
        cost[i]=cost[N-i]=INF;

        }
    }


void dij(int start){
  int u,v,w;
    priority_queue<pii,vector<pii>,comp>q;
    cost[start]=0;
    q.push(pii(start,0));

    while(!q.empty()){
        u=q.top().first;
        q.pop();

        for(unsigned int i=0;i<G[u].size();i++){
            v=G[u][i].first;
            w=G[u][i].second;
            if( u>=C || v==u+1 ){
              if(visited[v] ==0 && cost[v]>cost[u]+w ){
                 cost[v]=cost[u]+w;
                 q.push(pii(v,cost[v]) );
             }
            }

           }

         visited[u]=1;

      }

    }





int main(){
int M,K,u,v,w;
while(scanf("%d %d %d %d",&N,&M,&C,&K)==4){
     if(N==0 && M==0 && C==0 && K==0)
         break;


   for(int i=1;i<=M;i++){
      scanf("%d %d %d",&u,&v,&w);
      G[u].push_back(pii(v,w));
      G[v].push_back(pii(u,w));
     }

   init();
   dij(K);


   printf("%d\n",cost[C-1]);

for(int i=0;i<=N;i++)
  G[i].clear();


  }

    return 0;
    }

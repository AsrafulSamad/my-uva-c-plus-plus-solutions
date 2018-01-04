#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<memory.h>
#include<vector>

using namespace std;

#define pb(x) push_back(x)
#define set(a)  memset(a,0,sizeof(a))


unsigned int a[201] ;
bool visited[201];
vector<int>G[201];
unsigned int  N,E,u,v;

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



int main(){

unsigned int f,b=1;

while(cin>>N>>E ){
    f=0;
    set(a);set(visited);
    for(int i=0;i<N;i++)
      G[i].clear();

    for(int i=0;i<E;i++){
        cin>>u>>v;
        a[u]++;
        a[v]++;
        G[u].pb(v);
        G[v].pb(u);
      }

bfs(0);

for(int i=0;i<N;i++)
   if( !visited[i]  ){
      f=1;
     break;
     }

if( !f )
 for(int i=0;i<N;i++)
       if(a[i] & b  ||  a[i]==0  ){
           f=1;break;
           }
if(f)
  cout<<"Not Possible\n";
else
  cout<<"Possible\n";


    }

    return 0;
    }

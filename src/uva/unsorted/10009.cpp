#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<map>
#include<stdlib.h>
#include<math.h>
#include<queue>
#include<string.h>
#include<string>

using namespace std;

#define INF 1<<20
#define pb(x) push_back(x)
//#define fl() freopen("in.txt","r",stdin)
#define max 10000


map< string,int> mp;
map< int,string> mp2;

string st;
vector < int > G[max];

int cost[max],N,E,u,v,parent[max],m;
bool visited[max];

void init(){
    for(int i=1;i<=N;++i){
     cost[i]=INF;
     visited[i]=0;
     parent[i]=i;
    }
}

void bfs(int start){

  queue<int>q;

  q.push(start);
  cost[start]=0;
  visited[start]=1;
  parent[start]=0;

  while(!q.empty()){

   u=q.front();
   q.pop();
   for(int i=0;i<G[u].size();++i){
      if(visited[G[u][i]]==0 ){
         q.push(G[u][i]);
         visited[G[u][i]]=1;
         cost[G[u][i]]=cost[u]+1;
         parent[G[u][i]]=u;
         }

      }

    }

}

int main(){
    int t,i,j,k,u1,v1;

  //fl();

  string s1,s2;

  scanf("%d",&t);

 while(t--){

    scanf("%d%d",&E,&m);


///////////////////////////////////////////

       j=0;

    for(i=1;i<=E;++i){
       cin>>s1>>s2;

        if(mp[s1])
          u=mp[s1];
        else{
           mp[s1]=++j;
           mp2[j]=s1;
           u=j;
           }

        if(mp[s2])
          v=mp[s2];
        else{
           mp[s2]=++j;
           mp2[j]=s2;
           v=j;
          }

       G[u].pb(v);
       G[v].pb(u);

      }

N=j;

while(m--){
   init();

  cin>>s1>>s2;

   u1=mp[s1];
   v1=mp[s2];

   bfs(u1);


 vector<int> as;
 vector<int> :: reverse_iterator it;

  as.pb(v1);

    do{
     as.pb(parent[v1]);
     v1=parent[v1];
     }while(v1);


for(it=as.rbegin()+1;it!=as.rend();++it)
  printf("%c",mp2[*it].at(0));

printf("\n");

as.clear();

}


mp.clear();
mp2.clear();

for(i=0;i<=N;++i)
 G[i].clear();

if(t!=0)
 printf("\n");

}


 return 0;

}

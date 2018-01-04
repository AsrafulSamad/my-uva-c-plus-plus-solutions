#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<string.h>
#include<string>
#include <stdio.h>
#include <stdlib.h>

#define INF 1<<20
#define pb(x) push_back(x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define max 1000000
#define fil() freopen("in.txt","r",stdin)

using namespace std;

vector < int > G[max];
int N,E,u,v,parent[max];
bool visited[max];

void init(){
    for(int i=1;i<=N;++i){
      visited[i]=0;
      parent[i]=i;
    }
}

void bfs(int start){
  queue<int>q;
  q.push(start);
  visited[start]=1;
  parent[u]=0;

  while(!q.empty()){
   u=q.front();
   q.pop();
   for(int i=0;i<G[u].size();++i){
      if(visited[G[u][i]]==0 ){
         q.push(G[u][i]);
         visited[G[u][i]]=1;
         parent[G[u][i]]=u;
         }
      }
    }
}

void print_path( int ed ){
     if(parent[ed] !=0)
      print_path(parent[ed]);
       printf("%d " ,ed);
 }


int main(){

int i,j,k,c,end,m;

char str[10000];
char *pch,ch;

while(cin>>N  ){
//ch=getchar();
for(i=1;i<=N;++i){
    //scanf("%d",&u);
    cin>>u;
    G[u].clear();

 //gets(str);
 cin>>str;

 pch = strtok (str," ,.-");
 int f=0;
 while (pch != NULL)
  {
              v= strtol (pch,&pch,10);
              G[u].push_back(v);
              pch = strtok (NULL, " ,.-");

      }

}

//scanf("%d",&m);
cin>>m;
   printf("-----\n");

while(m--){
      //scanf("%d%d",&u,&v);
      cin>>u>>v;
        init();
        bfs(u);
   if(visited[v]==0)
     printf("connection impossible\n");
   else {
     print_path(parent[v]);
         printf("%d\n",v);
       }
 }

}

  return 0;
}


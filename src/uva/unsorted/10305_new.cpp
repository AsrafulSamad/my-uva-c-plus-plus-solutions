#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<queue>

using namespace std;

#define M 103
#define fl() freopen("in.txt","r",stdin)
#define pb(x) push_back(x)


vector<int> ans, depends[M];
vector<int>taken(M);

int N,E,u,v;



void take( int p ) {
    if( !taken[ p ] ) {
        for(int i=0; i<depends[p].size(); i++)
            take( depends[p][i] );
        ans.pb( p );
        taken[p] = 1;
    }
}

int main() {
    //fl();

   while(  scanf("%d%d",&N,&E)==2  ){
         if(N==0 && E==0)
            break;

    for(int i=1;i<=E;++i){
        scanf("%d%d",&u,&v);
       depends[v].pb( u );
      }

   for(int i=1;i<=N;i++)
      taken[i]=0;


    for(int i=1; i<=N; i++) take( i );
    for(int i=0; i<N; i++){
         printf("%d", ans[i]  );
        if(N>0 && i!=N-1)
             printf(" ");
         depends[i+1].clear();
         }
        printf("\n");
        ans.clear();

   }
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>

using namespace std;

#define M 105
#define pb(x) push_back(x)


vector<int> ans, depends[M];
vector<int>taken(M,0);

int N,E,u,v,R,m;



void take( int p ) {

    if( !taken[ p ] ) {
        for(int i=0; i<depends[p].size(); i++)
            take( depends[p][i] );
        ans.pb( p );
        taken[p] = 1;
    }

}



void clr(){
    for(int i=0;i<=N;++i){
        taken[i]=0;
        depends[i].clear();
     }
   ans.clear();
 }





int main() {

    while(scanf("%d%d",&N,&R)){
   if(N==0&& R==0) break;

    for(int i=1;i<=R;++i){
       scanf("%d%d",&u,&v);

      depends[v-1].pb(u-1);

      }

    for(int i=0; i<N; i++) take( i );
    for(int i=0; i<N; i++){
         printf("%d", ans[i]+1 );
      if(N>0 && i!=N-1)
       printf(" ");
      }

     printf("\n");

  clr();

    }

    return 0;
}

#include<iostream>
#include<cstdio>
#include<math.h>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define M 40
#define fl() freopen("in.txt","r",stdin)
#define pb(x) push_back(x)


vector<int> ans, depends[M] , G[M],ans2;
vector<int>taken(M);

int n,d,a[M][M] ,b[M] ,cost[M] ,path[M];
int N,E,u,v;


void init(){

     for(int i=0;i<=n;i++){
          cost[i]= 0;
          taken[i]=path[i]=0;
          depends[i].clear();
          G[i].clear();
          ans.clear();
          ans2.clear();
         }

    }


void take( int p ) {
    if( !taken[ p ] ) {
        for(int i=0; i<depends[p].size(); i++)
            take( depends[p][i] );
        ans.pb( p );
        taken[p] = 1;
    }
}


 int main() {

   while(scanf("%d %d",&n,&d) ==2 ){

             init();

        for(int i=1;i<=n;i++ ){
            for(int j=0;j<d;j++){
                scanf("%d",&a[i][j] );
                }
                sort(a[i],a[i]+d);
            }


  for(int i=1;i<=n;i++){

       for(int j=1; j<=n ;j++){
           if(i!=j){
           int f=1;
           for(int k=0;k<d;k++)
                if(a[i][k] >=a[j][k]  ){
                    f=0;  break;
                   }

           if(f){
             depends[j].pb(i);
             G[i].pb( j );
             }

           }

        }

  }



     for(int i=1; i<=n; i++) take( i );





      for(int i=0; i<n; i++) {
                 for(int j=0;j<G[ ans[ i ] ].size() ;j++  )
                     if(   cost[ G[ans[i] ] [j] ] <  cost[ans[i] ] + 1   ){
                             cost[ G[ans[i] ] [j] ] = cost[ans[i] ] + 1  ;
                             path[ G[ans[i] ] [j]   ] = ans[i] ;
                        }
              }


         int max=0,k=1;
        for( int i=1;i<=n; i++ )
              if(cost[i]>max ){
                  max=cost[i];
                  k=i;
                  }

                   max=0;
                   ans2.pb(k);

            do {
                   k=path[k] ;
                   ans2.pb(k);
                   max++;
                }while( k );

           printf("%d\n%d",max,ans2[max-1]);
          for(int i=max-2 ;i>=0 ;i--)
            printf(" %d",ans2[i] );
           printf("\n");

     }

     return 0;
 }

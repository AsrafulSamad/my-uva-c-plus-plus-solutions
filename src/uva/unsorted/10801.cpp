#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <stdlib.h>
using namespace std;

#define MAX 100001
#define INF 99999999
#define pii pair< int, int >
#define piii pair< pii , int >

#define pb(x) push_back(x)

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};

priority_queue< pii, vector< pii >, comp > Q;

int D[MAX];
bool F[MAX];

bool lf[6][100];
int  clf[6];
char str[250];
int vno[100];

int main() {
    int i, u, v, w, sz, nodes, edges, starting,end,nl,x,j,k,lf1,lf2;
    int bs,dbs;

    while(scanf("%d %d", &nl, &end)!=EOF){

   vector< piii > G[MAX];


   for(i=1;i<=nl;++i)
     scanf("%d",&clf[i]);

    cin.getline(str,250);


   for(i=1;i<=5;++i)
    for(j=0;j<=99;++j)
        lf[i][j]=0;


    for(i=0;i<=99;++i){
      F[i]=0;
      vno[i]=-1;
    }

  for(i=1;i<=nl;++i){
        bs=0;
      cin.getline(str,250);
    while(sscanf(str+bs,"%d%n",&x,&dbs)==1){
        bs+=dbs;
        lf[i][x]=1;
        }
   }


/////////////////////////////////////////pushing eadge //////////////////////////


  for(i=1;i<=nl;++i){

     for(j=0; j<=99; ++j){
        if(lf[i][j]>0){
           for(k=j+1;k<=99;++k){
              if(lf[i][k]>0){
                  G[j].pb( piii( pii(k, clf[i]*( abs(k-j) ) ) , i ) );
                  G[k].pb( piii( pii(j, clf[i]*( abs(k-j) ) ) , i ) ); // for undirected
                }
              }

           }
       }


  }


/////////////////////////////////////////////////////////////////////////////////////////////////

    starting=0;

    // initialize graph
    for(i=0; i<=99; i++) D[i] = INF;
    D[starting] = 0;
    Q.push(pii(starting, 0));
    // dijkstra
    while(!Q.empty()) {
        u = Q.top().first;
        lf1=vno[u];
        Q.pop();
        if(F[u]) continue;
        sz = G[u].size();
        for(i=0; i<sz; i++) {
            v = G[u][i].first.first;
            w = G[u][i].first.second;
            lf2=G[u][i].second;

         if( lf1==-1 || lf1==lf2 )
          if(!F[v] && D[u]+w < D[v]) {
                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
                vno[v]=lf2;
            }

         if(lf1!=-1 && lf1!=lf2)
           if(!F[v] && D[u]+w +60 < D[v]) {
                D[v] = D[u] + w +60;
                Q.push(pii(v, D[v]));
                vno[v]=lf2;
            }


          }

        F[u] = 1; // done with u
    }


 if(D[end]<INF)
     printf("%d\n",D[end]);
 else
    printf("IMPOSSIBLE\n");


    }
    return 0;
}

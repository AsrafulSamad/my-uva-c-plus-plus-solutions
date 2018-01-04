#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<memory.h>
#include<sstream>
#include<queue>
#include<memory.h>

using namespace std;

#define MAX 500
#define INF (1<<20)
#define pii pair< int, double >
#define pb(x) push_back(x)
#define  dis(x1,y1,x2,y2)  sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) )
#define fl() freopen("in.txt","r",stdin)



struct node{
       int x;
       int y;
    } a[MAX];



struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};

priority_queue< pii, vector< pii >, comp > Q;

vector< pii > G[MAX];
double  D[MAX];
bool F[MAX];



int main(){
  //fl();
   int u, v, sz, nodes, edges, starting;
   int x,y,t,i,j;
   double w;
   char line[3000],z,q;


        cin.getline(line,3000);
        stringstream ss( line );
        ss>>t;
        cin.getline(line,3000);

while(t-- ){

/////////////////////////////////////////////////////////////////////////////////////////////

       cin.getline(line,3000);
       stringstream ss( line );

         i=0;
       while(ss>>x){
           ss>>y;
           a[++i].x=x; a[i].y=y;
           }


  while( 1 ) {

        cin.getline(line,3000);
          if(line[0]=='\0' ) break;

        stringstream ss( line );
           j=i+1;
        while( ss >> x ){
             ss>>y;
             if(y== -1) break;
              ++i;
            a[i].x=x; a[i].y=y;
         }

      for(int k=j; k<i; k++) {
        u=k;v=k+1;
           w = ((dis( a[u].x,a[u].y,a[v].x,a[v].y )*60 )/40000 ) ;
          G[u].pb(pii(v, w));
          G[v].pb(pii(u, w));
        }



  }

int N=i;

for(i=1;i<N;++i){
    for(j=i+1;j<=N;++j){
                u=i;v=j;
           w = ( (dis( a[u].x,a[u].y,a[v].x,a[v].y  )*60  )/10000 );
          G[u].pb(pii(v, w));
          G[v].pb(pii(u, w));

        }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////

/*

for(i=1;i<=N;++i)
   for(j=0;j<G[i].size();++j)
      cout<<"u="<<i<<"  v="<<G[i][j].first<<"  w="<<G[i][j].second <<"\n";


*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    // initialize graph
    for(i=1; i<=N; i++) D[i] = INF;
    memset(F,0,sizeof(F));

    D[1] = 0;
    Q.push(pii(1, 0));

// dijkstra
    while(!Q.empty()) {
        u = Q.top().first;
        Q.pop();
        F[u]=1;
        sz = G[u].size();
        for(i=0; i<sz; i++) {
            v = G[u][i].first;
            w = G[u][i].second;
            if(!F[v] && D[u]+w < D[v]) {
                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
            }

        }

    }


printf("%ld\n", (long )(D[2]+0.5) );

for(i=1;i<=N;++i)
  G[i].clear();
if(t!=0) printf("\n");

 }

    return 0;
    }

#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >
#define pb(x) push_back(x)

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};

int main() {
    int i, u, v, w, sz, nodes, edges, starting,ending,t,j,k;

     scanf("%d",&t);
    for(j=1;j<=t;++j){
     priority_queue< pii, vector< pii >, comp > Q;
     vector< pii > G[MAX];
     int D[MAX];
     bool F[MAX]={0};

    ////////////// create graph ////////////////////////////
    scanf("%d %d", &nodes, &edges);
    scanf("%d %d", &starting,&ending);

    for(i=0; i<edges; i++) {
        scanf("%d %d %d", &u, &v, &w);
        G[u].pb(pii(v, w));
        G[v].pb(pii(u, w)); // for undirected
       }

    //////////////////////////////////// initialize graph /////////////////////////

    for(i=0; i<=nodes; i++) D[i] = INF;
    D[starting] = 0;
    Q.push(pii(starting, 0));


    ///////////////////////////////////////////// dijkstra /////////////////////////////

    while(!Q.empty()) {
        u = Q.top().first;
        Q.pop();
        if(F[u]) continue;
        sz = G[u].size();
       // DEBUG printf("visiting from %d:", u);
        for(i=0; i<sz; i++) {
            v = G[u][i].first;
            w = G[u][i].second;
            if(!F[v] && D[u]+w < D[v]) {
               // DEBUG printf(" %d,", v);
                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
            }
        }
       // DEBUG printf("\n");
        F[u] = 1; // done with u
    }

    //////////////////////// result ////////////////////////////

   if(D[ending]==INF)
    printf("Case #%d: unreachable\n",j,D[ending]);
   else
    printf("Case #%d: %d\n",j,D[ending]);

  }
    return 0;
}

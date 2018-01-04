#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

#define MAX 205

int n, e;
int partition[MAX], visited[MAX];
vector< int > G[MAX];

void init(){
    for(int i=0;i<n;i++){
          G[i].clear();
       partition[i]=visited[i]=0;
    }

    }




bool is_bipartite()
{
    int i, u, v, start;
    queue< int > Q;
    start = 0; // nodes labeled from 1
    Q.push(start);
    partition[start] = 1; // 1 left, 2 right
    visited[start] = 1; // set gray

    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
        for(i=0; i < G[u].size(); i++)
        {
            v = G[u][i];
            if(partition[u] == partition[v]) return false;
            if(visited[v] == 0)
            {
                visited[v] = 1;
                partition[v] = 3 - partition[u]; // alter 1 and 2
                Q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    int i, u, v;
    while(scanf("%d", &n)&&n ){
         scanf("%d",&e);

     init();

    for(i=0; i<e; i++)
    {
        scanf("%d %d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    if(is_bipartite()) printf("BICOLORABLE.\n");
    else printf("NOT BICOLORABLE.\n");




     }

    return 0;
}

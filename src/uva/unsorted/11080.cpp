#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

#define MAX 205

int n, e,c1,c2,ans;
int partition[MAX], visited[MAX];
//vector< int > G[MAX];
bool  G[MAX][MAX] ;

void init(){
for(int i=1;i<=n;i++){
        partition[i]=visited[i]=0;
        for(int j=i;j<=n;j++)
           G[i][j]=G[j][i] =0;
      }
}



bool is_bipartite(int start )
{
    int i, u, v;
    queue< int > Q;
      Q.push(start);
    partition[start] = 1;      // 1 left, 2 right
    visited[start] = 1;        // set gray
      c1=1;
    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
        for(i=1; i <=n; i++)
        if(G[u][i] ){
            v =i;
            if(partition[u] == partition[v])
                      return false;
            if(visited[v] == 0)
            {
                visited[v] = 1;
                partition[v] = 3 - partition[u]; // alter 1 and 2
                if(partition[v] == 1 )
                   c1++;
                 else
                   c2++;
                Q.push(v);
            }
        }
    }

    return true;


}

int main()
{
    int i, u, v,t,f;
    scanf("%d",&t);
    while(t--){
         f=1;
    scanf("%d %d", &n, &e);

    init();

    for(i=0; i<e; i++)
    {
        scanf("%d %d", &u, &v);
         G[u+1][v+1] = G[v+1][u+1 ] = 1;
      }

   ans=0;

     for(int i=1;i<=n;i++){
                       c1=c2=0;
                  if(!visited[i]){
                      if(is_bipartite(i)){
                               if(c1==1 && c2==0){
                                          ans+=1;
                                           }
                                else{
                                        if(c1<c2)
                                           ans+=c1;
                                          else
                                           ans+=c2;
                                        }

                          }
                   else{
                         printf("-1\n");
                         f=0;
                         break;
                         }
                  }

                   }

              if(f)
                 printf("%d\n",ans);


    }
    return 0;
}

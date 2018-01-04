#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

#define MAX 202

int n ,count1,count2,s1n;
int partition[MAX], visited[MAX];
bool G[MAX][MAX] ;
//vector<int>G[MAX];


void init(){
    for(int i=1;i<=n;i++){
       partition[i]=visited[i]=0;
    }
    for(int i=0;i<=n;i++)
      for(int j=i;j<=n;j++)
        G[i][j]=G[j][i]=0;
 }

bool is_bipartite( int start )
{
    int i, u, v,f=1;
    queue< int > Q;
    //start = 1; // nodes labeled from 1
    Q.push(start);
    partition[start] = 1; // 1 left, 2 right
    visited[start] = 1; // set gray
    count1=1;

    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
        for(i=1; i <=n; i++){
          if(G[u][i] )
            {
            v = i;
            if(partition[u] == partition[v]){
                 f=0;
                 }
            if(visited[v] == 0)
            {
                visited[v] = 1;
                partition[v] = 3 - partition[u]; // alter 1 and 2
                if(partition[v] ==1 )
                     count1++;
                 else
                    count2++;

                Q.push(v);
                }

            }

         }

        }


        if(f)
          return true;
       else
          return false;

 }

int main()
{
    int i, u, v,t,s,f;
    scanf("%d",&t);

    while(t--){
          f=1;
      scanf("%d", &n);
      init();

        for(int j=1; j<=n; j++ ){
                u=j;
               scanf("%d",&s);
               for(int k=1;k<=s;k++){
                  scanf("%d",&v);
                 // G[u].push_back(v);
                 // G[v].push_back(u);
                 if(v<=n)
                   G[u][v]=G[v][u]=1;

               }
          }


            s1n=0;
       for(i=1;i<=n;i++){
           count1=count2=0;
           if(!visited[i] )
            if(is_bipartite(i) ){
                  if(count1==1 && count2==0 )
                            s1n++;
                  else{
                           if(count1>count2)
                             s1n+=count1;
                           else
                              s1n+=count2;
                           }
                }


         }


           printf("%d\n",s1n );


    }

    return 0;
}

#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>

using namespace std;

#define MAX 1010
#define pb(x) push_back(x)
//#define fl() freopen("in.txt","r",stdin)
#define pi pair<int,int>
#define INF 1<<20

int N,M,ur,uc,vr,vc,sr,sc;
char maz[MAX][MAX];
int cost[MAX][MAX];

int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};

inline bool inside(int r,int c) {  if(r<M && r>=0 && c<M && c>=0) return 1; return 0; }

void init(){
  for(int i=0;i<=M;++i){
   for(int j=i;j<=M;++j)
     cost[i][j]=cost[j][i]=INF;
   }
 }


void bfs(int u, int v){
   queue<int>q;

   q.push(u);
   q.push(v);

   cost[u][v]=0;

   while(!q.empty()){

        ur=q.front(); q.pop();
        uc=q.front(); q.pop();

     for(int i=0;i<4;++i){
          vr=ur+dr[i]; vc=uc+dc[i];
         if(inside(vr,vc)){
              if(cost[vr][vc]>cost[ur][uc]+1){
                  cost[vr][vc]=cost[ur][uc]+1;
                  q.push(vr);q.push(vc);

                 }

             }
           }

        }

}




int main(){
  unsigned int i,j;


 //fl();

 while(scanf("%d",&M)!=EOF){
  vector<pi>one;
  vector<pi>three;

   for(i=0;i<M;++i)
    scanf("%s",maz[i]);

   for(i=0;i<M;++i)
    for(j=0;j<M;++j){
        if(maz[i][j]=='1')
          one.pb(pi(i,j));
        else if(maz[i][j]=='3')
          three.pb(pi(i,j));
       }


 int min,max=0;

    for(i=0;i<one.size();++i){
       init();

       bfs(one[i].first,one[i].second);

        min=99999;

       for(j=0;j<three.size();++j){
           if(cost[three[j].first][three[j].second]<min)
             min=cost[three[j].first][three[j].second];

          }

       if(max<min)
         max=min;

      }

  printf("%d\n",max);

one.clear();
three.clear();

 }


 return 0;

}

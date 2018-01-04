#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

#define MAX 1010
#define pb(x) push_back(x)
//#define fl() freopen("in.txt","r",stdin)
#define INF 1<<20


bool roboland[MAX][MAX];
int  cost[MAX][MAX];
int N,M,R,C,ur,uc,vr,vc;

int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};

inline void init(){
     for(int i=0;i<R;++i)
      for(int j=i;j<C;++j){
        roboland[i][j]=roboland[j][i]=1;
        cost[i][j]=cost[j][i]=INF;
       }
  }


inline bool inside(int r, int c) { if( r>=0 && r<R && c>=0 && c<C ) return 1; return 0; }

inline void bfs(int sr, int sc){
     queue<int> q;

      q.push(sr);
      q.push(sc);

      cost[sr][sc]=0;

     while(!q.empty()){
         ur=q.front();q.pop();
         uc=q.front();q.pop();

        for(int i=0;i<4;++i){

          vr=ur+dr[i];vc=uc+dc[i];

          if(inside(vr,vc) && roboland[vr][vc]){
              if(cost[vr][vc]>cost[ur][uc]+1){
                   cost[vr][vc]=cost[ur][uc]+1;
                   q.push(vr);
                   q.push(vc);
                  }
              }
         }

      }

  }



int main(){

 int i,j,r,c,m,n,sr,sc,er,ec;

 //fl();

 while(scanf("%d%d",&R,&C) && R && C){

    scanf("%d",&n);

    init();

   for(i=1;i<=n;++i){
     scanf("%d%d",&r,&m);
      for(j=1;j<=m;++j){
        scanf("%d",&c);
         roboland[r][c]=0;
        }
     }


scanf("%d %d %d %d",&sr,&sc,&er,&ec);


bfs(sr,sc);


printf("%d\n",cost[er][ec]);


}

return 0;
}

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<string>

using namespace std;

#define max 101

bool  take[max][max] , taken[max]  ;
int   lis[max] ;
int  indegree[max]  ;

map<string,int> m1;
map<int,string> m2;
int n,i, j, k,e,u,v,c;

void init(){

for(i=1;i<=n;i++){
 for(j=i;j<=n;j++)
     take[i][j]=take[j][i]=0;
     indegree[i]=taken[i]=0;
    }
m1.clear();
m2.clear();

 }


int main(){
//fl();

string s1,s2;
c=0;
while(std::cin>>n){

 ++c;
 init();

for(i=1;i<=n;i++){
  std::cin>>s1;
  m1[s1]=i;
  m2[i]=s1;
}

std::cin>>e;

 for(j=1;j<=e;++j){
  std::cin>>s1>>s2;
 if( ! take[ m1[ s1] ][ m1[s2] ]  ){
     take[ m1[ s1] ][ m1[s2] ]=1;
    ++indegree[ m1[s2] ] ;
    }
  }


for(i=1; i<=n; i++) {
    for(j=1; j<=n; j++)
      if( !indegree[j] && !taken[j] ) {
        taken[j] = 1;
        lis[i] = j ;
        for(k=1; k<=n; k++)
            if( !taken[k] && take[j][k] ) --indegree[k];
        break;
       }
}



    std::cout<<"Case #"<<c<<": Dilbert should drink beverages in this order:";
  for(i=1; i<=n; i++)
    std::cout<<" "<<m2[ lis[i] ];
    std::cout<<".\n\n";

 }

return 0;

}

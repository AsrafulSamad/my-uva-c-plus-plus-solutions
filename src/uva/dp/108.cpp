#include<cstdio>
#include<iostream>
#include<memory.h>
#define fl() freopen("input.txt","r",stdin)

using namespace std;


int main(){

//fl();

long  sum[105][105] ,  a[105][105] , n , p,q,r[105][105];

  while(cin>>n ){


for(int i=1;i<=n;++i)
  for(int j=1;j<=n;++j){
         cin>>a[i][j];
         r[i][j]=-99999;
      }

for(int k=1;k<=n;++k)
   for(int l=1;l<=n;++l ){
          p=0;
             //memset(sum,0,sizeof(sum));
             for(int w=0; w<=n;++w)
               sum[k-1][w]=sum[w][l-1]=0;

       for(int i=k;i<=n;++i ){
             ++p; q=0;
           for(int j=l;j<=n;++j ){
                 ++q;
                sum[i][j]=sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + a[i][j];
             if(r[p][q] < sum[i][j] )
               r[p][q] = sum[i][j];
           }
       }
   }

long max= -99999;
for(int i=1;i<=n;++i){
 for(int j=1;j<=n;++j){
    if(r[i][j]>max)
       max=r[i][j];
     }
 }

cout<<max<<endl;

 }

    return 0;
    }

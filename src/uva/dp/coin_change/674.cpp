#include<cstdio>
#include<iostream>
#include<memory.h>

using namespace std;
#define MAX  7510

unsigned long long nways[MAX+1] ;
int coin[5]={1,5,10,25,50 };

int main(){

    unsigned  long i,j,v,n,c;
    v=5;

     n=7510;
   memset(nways,0,sizeof(nways));
      nways[0]=1;
      for(i=0;i<v;++i){
           c=coin[i];
         for(j=c;j<=n;++j)
            nways[j]+=nways[j-c];
     }


while(scanf("%lu",&n)!=EOF ){
         printf("%llu\n",nways[n]);
      }

    return 0;
    }

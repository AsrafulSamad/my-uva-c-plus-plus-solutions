#include<cstdio>
#include<iostream>
#include<memory.h>

using namespace std;
#define MAX 10100

long long nways[MAX+1]={ 0 };
int coin[21]={1 ,8 ,27 ,64 ,125 ,216 ,343 ,512 ,729 ,1000 ,1331 ,1728 ,2197 ,2744 ,3375 ,4096 ,4913 ,5832 ,6859 ,8000 ,9261 };

int main(){

    unsigned  int i,j,v,n,c;
      v=21;
         n=10000;
      memset(nways,0,sizeof(nways));
      nways[0]=1;
      for(i=0;i<v;++i){
           c=coin[i];
         for(j=c;j<=n;++j)
            nways[j]+=nways[j-c];
     }


while(scanf("%d",&n)!=EOF )
    printf("%llu\n",nways[n]);

    return 0;
    }

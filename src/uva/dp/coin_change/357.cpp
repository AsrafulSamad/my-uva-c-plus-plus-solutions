#include<cstdio>
#include<iostream>
#include<memory.h>

using namespace std;
#define MAX 30100

long long nways[MAX+1]={ 0 };
int coin[5]={1,5,10,25,50};

int main(){

    unsigned  int i,j,v,n,c;
 v=5;

n=30001;

      memset(nways,0,sizeof(nways));
      nways[0]=1;
      for(i=0;i<v;++i){
           c=coin[i];
         for(j=c;j<=n;++j)
            nways[j]+=nways[j-c];
     }


while(scanf("%d",&n)!=EOF ){


  if(nways[n]==1)
      cout<<"There is only 1 way to produce "<<n<<" cents change.\n";
  else
    cout<<"There are "<<nways[n]<<" ways to produce "<<n<<" cents change.\n";


      }

    return 0;
    }

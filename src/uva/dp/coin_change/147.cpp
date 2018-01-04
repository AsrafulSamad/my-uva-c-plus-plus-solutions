#include<cstdio>
#include<iostream>
#include<memory.h>

using namespace std;

#define MAX 30100
#define eps 1e-7


unsigned long long  nways[MAX+1] ;
int coin[11] ={10000,5000,2000,1000,500,200,100,50,20,10,5 };

int main(){

      int  i,j,v,c,n,n1,n2;
      float m,m1;

    n=30099;
    memset(nways,0,sizeof(nways));

      v=11;
      nways[0]=1;

     for(i=0;i<v;++i){
           c=coin[i];
         for(j=c;j<=n;++j)
            nways[j]+=nways[j-c];

     }



     while( 2==scanf("%d.%d",&n1,&n2 ) ){
          n = n1 * 100 + n2;
           if( !n )
               break;



printf("%6.2f%17llu\n",((float)n/100.0f ),nways[n] );

     }

    return 0;
    }

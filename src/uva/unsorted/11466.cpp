#include<iostream>
#include<cstdio>
#include<cmath>
#define max  10000002
using namespace std;

bool sts[max];

int main(){

long long an,N1;
int f;
long m=10000000;

 ///////////////////////////////////////////////////////////////////////////////////////////////
           sts[2]=1;

        for(long i=3;i<=m;i+=2 )
                 sts[i]=1;

  long  m1=(long  )(sqrt(m) ) ;

     for(long i=3;i<=m1;i+=2 )
           if(sts[i]==1){
               for(long j=i*i ;j<=m;j+=i+i )
                    sts[j]=0;
                  }
/////////////////////////////////////////////////////////////////////////////////////////////

   while(scanf("%lld",&N1)&&N1  ){
               if(N1<0)
                    N1=N1*(-1);

          an=-1;

         long  m1=(long  )(sqrt(N1) ) ;

          if(N1<=2   && N1> 0 ){
             printf("-1\n" );
              continue;
              }

            f=0;

          if( N1%2==0 ){
                     while(N1%2==0){
                            N1=N1/2;
                         }
                      f=1;
              }


       for(long i=3;  i<= m1 ; i+=2 ){
                  if( sts[i]   ){

                               if( N1%i==0 ){
                                       while(N1%i==0){
                                              N1=N1/i;
                                                  }

                                            if(f==1)
                                              an=i;
                                           else if(f==0)
                                                f=1;
                                    }
                      }
               }

if(N1>1){
     if(f==1)
        an=N1;
  }

printf("%lld\n",an);


             }

    return 0;
    }


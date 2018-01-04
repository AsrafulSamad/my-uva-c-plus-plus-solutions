#include<iostream>
#include<cstdio>
#include<cmath>
#define max  1000002
using namespace std;

bool sts[max];


int main(){

unsigned  long  an,n,n1;
int f;
long m=1000000;

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

//////////////////////////////////////////////////////////////////////////////////////////////


while(scanf("%lu",&n)&& n ){
            an=0;
            n1=n;

              m1=(long  )(sqrt(n) ) ;

              if(n1%2==0 ){
                      ++an;
                  while(n1%2==0){
                         n1=n1/2;
                       //printf("2  \n" );
                      }

                  }

                  for(long i=3;i<=m1;i+=2 ){
                      if(sts[i]){
                                if(n1%i==0){
                                    ++an;
                                    while(n1%i==0){
                                          n1=n1/i;
                                           //printf("%lu  \n",i);
                                        }

                                 }
                               }
                      }
             if(n1>1){
                  ++an;
              // printf("%lu \n",n1);
              }

printf("%lu : %lu\n",n,an);


    }







    return 0;
    }

#include<iostream>
#include<cstdio>
#include<cmath>
#define max 100000002

using namespace std;

bool sts[max];
unsigned  long m=100000000;
bool f ;

int main(){

 unsigned long n ;

///////////////////////////////////////////////////////////////////////////////////////////////

   for(unsigned long i=3;i<=m;i+=2 )
                 sts[i]=1;

   unsigned long  m1=(unsigned long  )(sqrt(m) ) ;

     for(unsigned long i=3;i<=m1;i+=2 )
           if(sts[i]==1){
               for(unsigned long j=i*i ;j<=m;j+=i+i )
                    sts[j]=0;
                  }
///////////////////////////////////////////////////////////////////////////////////////////////////


while(scanf("%lu",&n )!=EOF ){

       f=1;
if(n<=4){
       printf("%lu is not the sum of two primes!\n",n);
      continue;
    }

if(n%2==1){
        if(sts[n-2] )
            printf("%lu is the sum of 2 and %lu.\n",n,n-2 );
        else
            printf("%lu is not the sum of two primes!\n",n);
       }
else{

          for( unsigned long i= n/2-1;i>=3 ;i--  ){
                       if(sts[i]   &&  sts[ n-i ]   ){
                             printf("%lu is the sum of %lu and %lu.\n",n,i,n-i );
                                     f=0;
                                     break;
                               }
               }

              if(f==1)
                 printf("%lu is not the sum of two primes!\n",n);

     }






    }





return 0;
}

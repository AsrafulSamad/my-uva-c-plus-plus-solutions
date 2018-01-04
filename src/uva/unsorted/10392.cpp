#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

long  a[166711] ;

bool isprime(long n){
    for(long i=3;i*i<=sqrt(n);i+=2 )
       if(n%i==0) return 0;
            return 1;
    }

int main(){
       int c=1;
         a[1]=2;
    for(long i=3;i<=1000000;i+=2  )
       if( isprime(i) ){
         ++c;
         a[c]=i;
         }

long long n,m;
    while(1){
             scanf("%lld",&n );
             if(n< 0 ) break;
              m  =  ( long long  ) ( sqrt(n ) );

             for(int i=1;i<=c && a[i]<=m;i++ ){
                         if(n%a[i]==0){

                             while(n%a[i] ==0){
                                 printf("    %ld\n",a[i]);
                                  n/=a[i];
                                 }
                         }
                 }
           if(n>1 )
              printf("    %lld\n",n);

            printf("\n");
             }


    return 0;
    }

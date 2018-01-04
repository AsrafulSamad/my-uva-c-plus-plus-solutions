#include<stdio.h>

long square(long s){
    return s*s;
    }


long bigmod(long b,long p,long m){
    if(p==0)
      return 1;
    else if(p%2==0)
      return square(bigmod(b,p/2,m))%m;
    else
      return ((b%m)*bigmod(b,p-1,m))%m;

    }



int main(){
    long b,p,m,n;
    while(scanf("%ld %ld %ld",&b,&p,&m)!=EOF){
        n=bigmod(b,p,m);
    printf("%ld\n",n);
    }





return 0;
    }

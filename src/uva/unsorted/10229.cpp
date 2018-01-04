#include<stdio.h>
#include<math.h>
unsigned long long i,j,k,h,t;

unsigned long long square(unsigned long long s){
    return s*s;
    }

unsigned long long bigmod(unsigned long long b,unsigned long long p,unsigned long long m){
    if(p==0)
      return 1;
    else if(p%2==0)
      return square(bigmod(b,p/2,m))%m;
    else
      return ((b%m)*bigmod(b,p-1,m))%m;

    }


long fib(unsigned long long n){
    i=h=1;
    j=k=0;
    while(n>0){
        if(n%2==1){

            t=j*h;
            j=i*h+j*k+t;
            i=i*k+t;
            }
          t=h*h;
          h=2*k*h+t;
          k=k*k+t;
          n=(unsigned long long)n/2;
      }

return j;
}

int main(){

unsigned long long n,m,p,q;

  while(scanf("%llu %llu",&n,&m)!=EOF){

       q=fib(n);
       k=(unsigned long long)pow(2,m);
       p=bigmod(q,1,k);
      printf("%llu\n",p);
      }
return 0;
        }

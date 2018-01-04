#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;



int main(){
    long t,n,a,b,c,min;
    bool f;
    scanf("%ld",&t);

    while(t--){
        f=0;
        min=9999999;

        scanf("%ld",&n);
        long sq= n/2+1;//( long) sqrt( (double) (n*1.0) )+1;
        if(n==0){
            printf("0\n");
            continue;
            }

       for(long i=2;i<=sq;i++)
         for(long j=i;j<=sq;j++)
          for(long k=j;k<=sq;k++)
             if(i*j*k==n){
                if((2*i*j+2*i*k+2*j*k)<min)
                  min=2*i*j+2*i*k+2*j*k;
                }

       for(long  i=2;i<=sq;i++)
         for(long  j=i;j<=sq;j++)
             if(n==i*j){
               if(2*i+2*i*j+2*j <min)
                 min=2*i+2*i*j+2*j;
             }

         if(4*n+2<min)
           min=4*n+2;


         printf("%ld\n",min);

        }

    return 0;
    }

#include<stdio.h>

int main(){
    long a,b,t=1;
    unsigned long  n,m,i,v;

    while(scanf("%ld %ld",&a,&b)==2){
     if(a<0&&b<0)break;
     n=a;m=b;v=n;

     i=1;

   while(n!=1){


     if(n%2==0)
      n=n/2;
     else
       n=3*n+1;

     if(n>m)
     break;
   ++i;

       }



printf("Case %ld: A = %lu, limit = %lu, number of terms = %lu\n",t,v,m,i);
++t;

        }


    return 0;
    }

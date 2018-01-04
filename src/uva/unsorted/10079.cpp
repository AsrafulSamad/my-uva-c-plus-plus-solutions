#include<stdio.h>
int main(){

   long n,i;
   unsigned long s;
   while(scanf("%ld",&n)&&!(n<0)){

       if(n==0){
        printf("1\n");
        continue;
        }
       if(n==1){
        printf("2\n");
       continue;
       }


       s=2;
        for(i=2;i<=n;i++)
          s+=i;

       printf("%lu\n",s);
    }

return 0;
    }

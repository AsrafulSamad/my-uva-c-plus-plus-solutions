#include<stdio.h>

int main(){

    long long n,s;
    while(scanf("%lld",&n)!=EOF){

        if (n<0) {
         if (-n%2==0)
           printf("Underflow!\n");
         else
            printf("Overflow!\n");
        }

        else if(n>13)
            printf("Overflow!\n");
        else if(n<8)
            printf("Underflow!\n");

         else if(n>=8&&n<=13)
         {
             s=n;
            while(s!=1){
            s=s-1;
            n=n*s;
            }
            printf("%lld\n",n);
            }

        }
return 0;
    }

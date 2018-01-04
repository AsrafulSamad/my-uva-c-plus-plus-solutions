#include<stdio.h>
int main(){
   int fib[51],n;
   int i;
     fib[0]=1;
     fib[1]=1;
for(i=2;i<51;i++)
    fib[i]=fib[i-1]+fib[i-2];
while(scanf("%d",&n)&&n){

      printf("%d\n",fib[n]);

    }

return 0;
    }

#include<stdio.h>
int main(){
       long n,i,sum,m,k=1;

       while(scanf("%ld",&n)&&n){
            if(k==1)
              printf("PERFECTION OUTPUT\n");
            sum=0;
            m=n/2;
            for(i=1;i<=m;i++){
                  if(n%i==0)
                    sum=sum+i;
                  }
              if(sum==n)
                printf("%5ld  PERFECT\n",n);
              else if(sum<n)
                printf("%5ld  DEFICIENT\n",n);
              else
                printf("%5ld  ABUNDANT\n",n);
                k=2;
}

printf("END OF OUTPUT\n");

return 0;
    }

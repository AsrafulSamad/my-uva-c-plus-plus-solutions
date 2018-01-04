#include<stdio.h>
int main(){
    unsigned long a[1000001],n,m,i,j,k,b;
    while(scanf("%lu%lu",&n,&m) &&n &&m){
        k=0;

        for(i=1;i<=n;++i){
          scanf("%lu",&b);
           a[i]=b;
          }

 i=1;

        for(j=1;j<=m;++j){
         scanf("%lu",&b);
           for(;i<=n;++i){
            if(a[i]==b){
              ++k;
             break;
              }
            if(a[i]>b) break;

           }

        }

printf("%lu\n",k);

}

    return 0;
    }

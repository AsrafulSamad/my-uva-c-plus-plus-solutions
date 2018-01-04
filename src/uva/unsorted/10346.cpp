#include<stdio.h>

int main(){

    int n,m,c;
    while(scanf("%d %d",&n,&m)!=EOF){
      if(m>n){
         printf("%d\n",n);
        continue;
        }

        c=0;
        while(n>=m){
            c=c+m;
            n=(n-m)+1;

            }
        c=c+n;

        printf("%d\n",c);


        }









    return 0;
    }

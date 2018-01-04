#include<stdio.h>
int main(){

    int t,n,m,p,i,j,c;

     scanf("%d",&t);
     for(i=1;i<=t;i++){
         scanf("%d %d %d",&n,&m,&p);

         c=0;
         for(j=m;;){
              ++c;
             if(c==p)break;

             if(j==n)
              j=1;
             else
              ++j;
            }

       if(j==n)
        j=1;
       else
        j=j+1;

       printf("Case %d: %d\n",i,j);

         }

    return 0;
    }

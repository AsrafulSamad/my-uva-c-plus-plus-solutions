#include<stdio.h>
int main(){
     int t,a[101],i,j,n,k;
     char c;
     scanf("%d",&t);
     for(i=1;i<=t;i++){
         j=0;
         for(;;){
             scanf("%d%c",&a[j],&c);
             if(c=='\n')break;
             ++j;
             }

         n=a[0];
         for(k=1;k<=j;k++){
             if(a[k]>n)
              n=a[k];
             }

         printf("Case %d: %d\n",i,n);

         }







    return 0;
    }

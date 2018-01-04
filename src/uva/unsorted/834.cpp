#include<stdio.h>

int main(){

 int n,m,a;
 while(scanf("%d %d",&n,&m)==2){

     printf("[%d;",n/m);
     if(n!=1){
         a=m;
         m=n%m;
         n=a;
         }

     for(;;){


         if((n%m==1) && (n/m!=0)){
            printf("%d,%d]\n",n/m,m);
         break;
         }
         if((n%m==1) && (n/m==0)){
            printf("%d]\n",m);
         break;
         }


         printf("%d,",n/m);
         a=m;
         m=n%m;
         n=a;

         }
     }

return 0;
    }

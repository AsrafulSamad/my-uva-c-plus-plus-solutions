#include<stdio.h>
#include<algo.h>

int main(){

    unsigned long a[10001],i,m;

    a[0]=0;
     i=0;
     while(scanf("%lu",&a[++i])==1){

         sort(a,a+i+1);

         if(i==1)
           printf("%lu\n",a[1]);
         else if(i==2){

           m=(a[1]+a[2])/2;
           printf("%lu\n",m);

           }
         else if(i%2==1)
            printf("%lu\n",a[i/2+1]);
         else{
            m=(a[i/2]+a[i/2+1])/2;
            printf("%lu\n",m);
            }

         }


    return 0;
    }

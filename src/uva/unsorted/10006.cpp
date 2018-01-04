#include<stdio.h>
int main(){
    int n,i,f;
   int a[]={ 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745,63973};

    while(scanf("%d",&n)&&n){
         f=0;
         for(i=0;i<15;i++)
            if(a[i]==n){
              f=1;break;
              }
         if(f==0)
          printf("%d is normal.\n",n);
         else
          printf("The number %d is a Carmichael number.\n",n);

        }



    return 0;
    }

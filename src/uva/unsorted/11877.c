#include<stdio.h>
int main(){
    int n,c,k;
    while(scanf("%d",&n)&&n){
       c=0;
      while(n!=1){                                   
          c=c+(n/3);
          n=n%3+n/3; 
          if(n==2)
           n+=1;
         }
    printf("%d\n",c);
        }
    return 0;
    }

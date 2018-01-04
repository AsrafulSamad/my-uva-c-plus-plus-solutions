#include<stdio.h>
int main(){
    int n,c;
    while(scanf("%d",&n)!=EOF){
       c=n;
      while(n!=1){
          c+=n/3;
          n=n%3+n/3;
          if(n==2)
           n+=1;
         }
    printf("%d\n",c);
        }
    return 0;
    }

#include<stdio.h>
int main(){
    int t,b,c,s,p,i,j,k,n;;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
     scanf("%d %d %d",&c,&s,&p);
     c=c+s;
     k=0;
     n=0;
     while(c>=p){
      k=c/p;
      c=k+(c%p);
      n=n+k;
      }

  printf("%d\n",n);


  }
    return 0;
    }

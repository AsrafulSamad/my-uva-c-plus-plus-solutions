#include<stdio.h>

int  is_prime(int n){

	if (n==1) return 1;
    if (n==2)  return 1;
    if (n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2)
      if(n%i==0)
         return 0;
      return 1;
    }


int main(){

int p[3537],n,i,j=0,k,m,c;

p[0]=2;

for(i=3;i<=33000;i=i+2){
    k=is_prime(i);
   if(k==1)
    p[++j]=i;
   }

while(scanf("%d",&n)&&n){
    c=0;
    m=n/2;
    for(i=0;p[i]<=m;i++){
       k=is_prime(n-p[i]);
        if(k==1)
           ++c;
        }

    printf("%d\n",c);

    }


return 0;
    }

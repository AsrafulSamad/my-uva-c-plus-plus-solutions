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

    int n,k;
    while(scanf("%d",&n)&&n){

       k=is_prime(n);

       if(k==0)
          printf("Given number is NOT prime! NO perfect number is available.\n");
       else if(n==11 || n==23 || n==29)
          printf("Given number is prime. But, NO perfect number is available.\n");
       else
          {
             if(n==2)
              printf("Perfect: 6!\n");
             if(n==3)
              printf("Perfect: 28!\n");
             if(n==5)
              printf("Perfect: 496!\n");
             if(n==7)
              printf("Perfect: 8128!\n");
             if(n==13)
              printf("Perfect: 33550336!\n");
             if(n==17)
              printf("Perfect: 8589869056!\n");
             if(n==19)
              printf("Perfect: 137438691328!\n");
             if(n==31)
              printf("Perfect: 2305843008139952128!\n");



              }

    }
    return 0;
    }


#include<stdio.h>

long long int a,p[60000];

int prime(int n){

	if (n==1) return 1;
    if (n==2)  return 1;
    if (n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2)
      if(n%i==0)
         return 0;
      return 1;
    }



 int print(long long int n)
{
    int i;

    for(i=1;p[i]*p[i]<=n;i++)
    {
       while(n%p[i]==0)
       {
	  n=n/p[i];
	  if(n!=1) { printf("%lld ",p[i]);printf("x ");}
	  else printf("%lld",p[i]);
       }
       if(n==1) { printf("\n");return 0;}
    }
	if(n!=1) printf("%lld",n);
	printf("\n");

     return 0;
}


int main(){

int i,j,k;


for(i=0;i<=60000;i++)
   p[i]=2;


p[1]=2;
j=2;
for(i=3;i<=60000;i=i+2){
    k=prime(i);
   if(k==1)
    p[j++]=i;

}


while(scanf("%lld",&a) && a){

	   printf("%lld = ",a);
	   if(a==1) { printf("1\n"); continue;}
	   if(a==-1){ printf("-1 x 1\n"); continue;}
	   if(a<0)
	   {
	      printf("-1 x ");
	      a=a/-1;
	   }
	   print(a);
}

return 0;
}


#include<stdio.h>
#include<math.h>


unsigned long long i1,a,b,n,m,p,i,j,a1,l,k,p1,m1,primeNumbers[4000];

int prime( unsigned long long n1){
    if (n1==1) return 1;
    if (n1==2)  return 1;
    if (n1%2==0) return 0;
    for(i1=3;i1*i1<=n1;i1+=2)
      if(n1%i1==0)
         return 0;
      return 1;
    }



unsigned long long numdiv( unsigned long long n2){
      m=1;
      for(j=1;primeNumbers[j]*primeNumbers[j]<=n2;++j){
          p1=primeNumbers[j];
          k=0;
          while(n2%p1==0){
              ++k;
              n2=n2/p1;
            }
         m=m*(k+1);
         if(n2==1)break;

        }
      if(n2!=1)
        m=m*2;

return m;
    }

int main(){

primeNumbers[1]=2;

   k=1;
for(i=3;i<=35000;i=i+2){
 if(prime(i)==1){
    primeNumbers[++k]=i;
  }
}

scanf("%llu",&n);

while(n--){

 scanf("%llu %llu",&a,&b);
      p=0;a1=a;

  for(i=a;i<=b;++i){
    m1=numdiv(i);
    if(m1>p){
        a1=i;
        p=m1;
        }
      }

printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",a,b,a1,p);


}

return 0;
}

#include<stdio.h>

int prime( unsigned long  n){

    if (n==1) return 1;
    if (n==2)  return 1;
    if (n%2==0) return 0;
    for(long i=3;i*i<=n;i+=2)
      if(n%i==0)
         return 0;
      return 1;
    }


int main(){
unsigned long p,j,a,b,c,i;;
bool p1[10002]={0};
double f;

for(j=0;j<=10000;++j)
  if(prime(j*j+j+41))p1[j]=1;

while(scanf("%lu %lu",&a,&b)!=EOF){
    c=0;
    if(a>b)
      a^=b^=a^=b;

for(i=a;i<=b;++i)
   if(p1[i])
    ++c;
printf("%.2lf\n",( (1.0*(100*c)/(b-a+1))+1e-9));
}


    return 0;
    }

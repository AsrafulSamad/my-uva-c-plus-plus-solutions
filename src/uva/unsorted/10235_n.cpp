#include<stdio.h>
#include<string.h>
#include<math.h>

bool isprime(unsigned long  n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(unsigned long i=3;i*i<=n;i+=2)
       if(n%i==0)
        return 0;
        return 1;
    }


int main(){
double n,m;
long l,i,j,n1,m1;
char a[20];
while(gets(a)){
 l=strlen(a);
n=0;j=l;m=0;

for(i=0;i<l;++i)
  n+=(pow(10,--j))*(double)(a[i]-48);
j=l;
for(i=l-1;i>=0;--i)
  m+=(pow(10,--j))*(double)(a[i]-48);

n1=(long)n;
m1=(long)m;
if(isprime(n1)&&isprime(m1)&&n1!=m1)
 printf("%ld is emirp.\n",n1);
else if(isprime(n1)&&!isprime(m1) || (isprime(n1)&&n1==m1))
 printf("%ld is prime.\n",n1);
else
 printf("%ld is not prime.\n",n1);

}
    return 0;
    }

#include<stdio.h>

int main(){
unsigned long m,n,s,a,v;
unsigned long i,j=0,k;
while(scanf("%lu %lu",&m,&n)==2){
if(n==0 && m==0) break;

if(m>n){
    s=m;
    m=n;
    n=s;
    }

for(k=m;k<=n;k++)
{
s=k;
do
{
if((int)s%2==0)
      s=s/2;
else
     s=3*s+1;
j++;
}while(s!=1);

if(k==m){
   i=j;
   v=k;
}

if(j>i){
   i=j;
   v=k;
}
j=0;
}
printf("Between %lu and %lu, %lu generates the longest sequence of %lu values.\n",m,n,v,i);
}

return 0;
}

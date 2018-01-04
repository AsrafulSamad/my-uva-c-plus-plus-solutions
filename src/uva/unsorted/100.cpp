#include<stdio.h>

int main(){
long unsigned int m,n,s,a;
int i,j=1,k;

while(scanf("%lu %lu",&m,&n)!=EOF){

printf("%lu %lu",m,n);
if(m>n)
{
a=m;
m=n;
n=a;
}


for(k=m;k<=n;k++)
{
s=k;
while(s!=1)
{
if(s%2==0)
      s=s/2;
else
     s=3*s+1;
j++;
}
if(k==m)
   i=j;
if(k==1)
   j=1;
if(j>i)
   i=j;
j=1;
}
printf(" %d\n",i);
}

return 0;
}

#include<stdio.h>
#include<string.h>

int main(){

int n,i,j,k,l,m,c,d,p,q=0;
char a[10000];

while(gets(a)){
if(q==1)
printf("\n");
q=1;
l=strlen(a);
i=j=k=m=c=p=d=0;

d=(a[l-2]-48)*10+(a[l-1]-48);

if(d==0)
 j=1;

if(d!=0 && d%4==0)
 k=1;

if(l>=4){
d=(a[l-4]-48)*10+(a[l-3]-48);
if(d%4==0 && j==1)
 k=1;
}
else if(l==3){
 d=(a[l-3]-48);
if(d%4==0 && j==1)
 k=1;
}

d=0;
for(n=0;n<l;n++)
  d=d+(a[n]-48);

if(d%3==0)
  c=1;

if(a[l-1]=='5' || a[l-1]=='0')
   m=1;

d=0;
for(n=0;n<l;n=n+2)
 d=d+(a[n]-48);

for(n=1;n<l;n=n+2)
 d=d-(a[n]-48);
if(d==0)
  p=1;

if(k==1&&(m==1&&c==1)&&(p==1&&m==1))
{
   printf("This is leap year.\n");
   printf("This is huluculu festival year.\n");
   printf("This is bulukulu festival year.\n");
}
else if(k==1&&(c==1&&m==1))
{

   printf("This is leap year.\n");
   printf("This is huluculu festival year.\n");

}
else if(k==1&&(p==1&&m==1))
{
   printf("This is leap year.\n");
   printf("This is bulukulu festival year.\n");

}
else if(c==1&&m==1)
   printf("This is huluculu festival year.\n");
else if(k==1)
  printf("This is leap year.\n");

else
   printf("This is an ordinary year.\n");



}

return 0;
}

#include<stdio.h>
int main(){
int a,b[21],c,i,j,l,u,t,n,k;

scanf("%d",&t);


for(k=1;k<=t;k++){
  scanf("%d",&n);

for(j=0;j<n;j++)
    scanf("%d",&b[j]);


l=b[0];
u=b[0];
for(i=1;i<n;i++){
if(b[i]<l)
  l=b[i];
if(b[i]>u)
  u=b[i];

    }

c=(u-l)*2;
printf("%d\n",c);

    }
return 0;
}

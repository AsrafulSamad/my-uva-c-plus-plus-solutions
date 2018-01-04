#include<stdio.h>

int main(){
long unsigned int m,n,s,a;
int i,j,k;

while(scanf("%lu %lu",&m,&n)!=EOF  ){
printf("%lu %lu",m,n);

  if(m>n){
    a=m; m=n;n=a;
    }

i=1;
for(k=m;k<=n;k++)
{
   j=1;
s=k;
   while(s!=1)
     {
            if(s%2==0)
               s=s/2;
            else
               s=3*s+1;
         j++;
       }
if(j>i)
   i=j;
   }
printf(" %d\n",i);

}

return 0;
}

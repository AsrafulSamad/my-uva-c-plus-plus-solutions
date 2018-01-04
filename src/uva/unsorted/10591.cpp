#include<stdio.h>
#include<math.h>

int main(){

int i,x,k,j,f;
scanf("%d",&x);
for(i=1;i<=x;i++){

unsigned long int n,m,s,a,b[100];

scanf("%lu",&n);
m=n;

k=0;
while(1){

s=0;
f=0;
while(n!=0){

    a=n%10;
    n=n/10;
    s=pow(a,2) + s;

}

b[k++]=s;

if(k>2){

 for(j=0;j<k-1;j++){

      if(b[j]==s)
	  {
            f=1;
            break;

            }
     }
}


if(s==m)
  break;
if(s==1)
  break;
if(f==1)
  break;
n=s;

}


if(s==1)
 printf("Case #%d: %lu is a Happy number.\n",i,m);
else if((s==m)||(f==1))
 printf("Case #%d: %lu is an Unhappy number.\n",i,m);

}
return 0;
    }

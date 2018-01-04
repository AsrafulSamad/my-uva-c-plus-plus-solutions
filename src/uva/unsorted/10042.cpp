#include <stdio.h>
#include <math.h>


int mark;


int sum_dig(unsigned long x){

int sum=0;

  while(x>0){
    sum+=(x%10);
    x=x/10;
    }

 return sum;
}



int pri_fac(unsigned long num){

unsigned long i;
int sum=0;
mark=1;

if(num==1) return 1;


for(i=2;i<=sqrt(num)&&num>1;)
{
if(num%i==0)

{
sum+=sum_dig(i);
num=num/i;
mark=0;
}
else
i++;

}

if(num>1)
  sum+=sum_dig(num);

return sum;
}

int main(){

int t,s_fac,s_dig;;
unsigned long i,val;

scanf("%d",&t);

while(t--){

scanf("%lu",&val);

for(i=val+1;;i++){

s_fac=pri_fac(i);

if(mark==1)
  continue;

s_dig=sum_dig(i);

if(s_fac==s_dig){
  printf("%lu\n",i);
 break;
 }

 }

}

return 0;
}


#include<stdio.h>
#include<math.h>
#define max 1000009

int p[max];
int q[max];

long a[1000000];

inline unsigned long sum_dig(unsigned long x){

unsigned long sum=0;
  do{
    sum += x;
    x /= 10;
    sum -= x*10;
    } while (x);

 return sum;

}


///////

inline void prime_table()
{
long i,j,c=0;
for(i=2;i<max;i++) {p[i]=1;q[i]=1;}
for(i=2;i<=max; )
{

for(j=i+i;j<=max;j+=i){

p[j]=0;
q[j]=0;
}
if(p[sum_dig(i)]==0)
q[i]=0;
i++;
for( ;!p[i];i++);
}
}

/////////


inline void s_dig(){

unsigned long i,sum=1;

  for(i=3;i<=max;i+=2){
     if(q[i])
      a[i]=++sum;
     else
      a[i]=sum;

     a[i+1]=sum;
   }
}




/////////



int main(){

a[0]=0;a[1]=0;a[2]=1;

 prime_table();
 s_dig();



unsigned long l,u,t,num;

scanf("%lu",&t);

while(t--){

scanf("%lu %lu",&l,&u);

num=a[u]-a[l-1];
printf("%lu\n",num);

}

return 0;
}




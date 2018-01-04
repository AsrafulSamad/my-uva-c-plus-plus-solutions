#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

unsigned long i1,a[78510];

void sieve(int L,int U) {
int i,j,d;
d=U-L+1;
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true;
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;
for (i=3;i<=sqrt(U);i+=2) {
if (i>L && !flag[i-L]) continue;
j=L/i*i; if (j<L) j+=i;
if (j==i) j+=i;
j-=L;
for (;j<d;j+=i) flag[j]=false;
}
if (L<=1) flag[1-L]=false;
if (L<=2) flag[2-L]=true;
for (i=0;i<d;i++) if (flag[i]) a[i1++]=L+i;

}


int main(){

unsigned long j,i,l,m,c[120],max,flag,indx;
int t;

sieve(1,1000003);

scanf("%d",&t);

while(t--){

scanf("%lu %lu",&l,&m);

 for(i=0;i<120;i++)
    c[i]=0;

 for(i=0;a[i]<l;i++);



  for(;a[i+1]<=m;i++)
    c[(a[i+1]-a[i])]++;

 max=0;flag=0;indx=0;

 for(i=0;i<120;i++)
     if(c[i]>max){
     indx=i;
     max=c[i];
     }

 for(i=0;i<120;i++){
     if(c[i]==max && i!=indx)
     flag=1;
 }


 if(flag==0 && c[indx]>0)
    printf("The jumping champion is %lu\n",indx);
 else
    printf("No jumping champion\n");



}

return 0;
}

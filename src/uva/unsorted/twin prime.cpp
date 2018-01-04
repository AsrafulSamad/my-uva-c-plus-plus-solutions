#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

unsigned long i1,a[1270609],b[100001];

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
for (i=0;i<d;i++) if (flag[i]) {
    a[i1++]=L+i;
    //cout<<(L+i)<<" ";
    }

}



int main(){

unsigned long k,j,n;

sieve(1,18409201);

j=0;
        for(k=1;j<=100000;++k){
          if(a[k]+2==a[k+1])
            b[++j]=a[k];
           }

while(scanf("%lu",&n)==1){

printf("(%lu, %lu)\n",b[n],b[n]+2);
}

return 0;
    }


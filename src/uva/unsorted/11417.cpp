#include<stdio.h>
unsigned long GCD(unsigned long a,unsigned long b){
    if(a%b==0)return b;
    else return GCD(b,a%b);

    }



int main(){

   unsigned long N,G,i,j;


while(1){
scanf("%lu",&N);

if(N==0) break;

G=0;


for(i=1;i<N;i++)
 for(j=i+1;j<=N;j++)
    G+=GCD(i,j);



printf("%lu\n",G);

}

    return 0;
    }

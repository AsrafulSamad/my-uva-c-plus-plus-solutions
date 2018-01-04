#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int main(){
   int t;
   scanf("%d",&t);
   long P,I,D;
   while(t--){
  scanf("%ld %ld",&D,&I);


  P=1;
  for (long j=0;j<D-1;j++) {
    P=I%2!=0 ? 2*P : 2*P+1; /* go to left or right? */
    I=(long)(I+1)/2; /* round up */

    }

    printf("%ld\n",P);

   }

  scanf("%d",&t);

    return 0;
    }

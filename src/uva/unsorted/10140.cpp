#include <string.h>
#include<cstdio>
#include<iostream>
#include<memory.h>
#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 1000005

/*
#define MAX 46350
#define LMT 216
#define LEN 6000
#define RNG 100001

*/

unsigned base[MAX/64], segment[RNG/64], primes[LEN];

/*
bool  base[ MAX ], segment[ RNG ] ;
unsigned  primes[LEN];
*/

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))


using namespace std;


/* Generates all the necessary prime numbers and marks them in base[]*/

void sieve()
{
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j);
    for(i=3, j=0; i<MAX; i+=2)
        if(!chkC(base, i))
            primes[j++] = i;
}

/* Returns the prime-count within range [a,b] and marks them in segment[] */
void  segmented_sieve( unsigned long a, unsigned long   b)
{
    unsigned  long i, j, k  ;     //, cnt = (a<=2 && 2<=b)? 1 : 0;
   // if(b<2) return 0;
    if(a<3) a = 3;
    if(a%2==0) a++;
    mset(segment,0);
    for(i=0; sq(primes[i])<=b; i++)
    {
        j = primes[i] * ( (a+primes[i]-1) / primes[i] );
        if(j%2==0) j += primes[i];
        for(k=primes[i]<<1; j<=b; j+=k)
            if(j!=primes[i])
                setC(segment, (j-a));
    }


  }



int main(){

unsigned long  l,u,m,d1,d2,c1,c2,c3,c4,i,j,f,jo;

mset(base,0);
sieve();

while(scanf("%lu %lu",&l,&u)==2 ){

m=l;

if(u==2 ){
 printf("There are no adjacent primes.\n");
 continue;
 }

/////////////////////////////////////////////////////////////////////////////////////////////////


        segmented_sieve(l,u);



/////////////////////////////////////////////////////////////////////////////////////////////////
if( l<=3 )
     jo=3;
else if(l%2==0)
     jo=l+1;
else
    jo=l;



   d1=10000;d2=0;


if ( l<=2 ){
   m=2;
   j=0;
   }
else{

    i=0;
  while(chkC(segment, i )){
            i++;
           }
     m=i+jo;
     j=i+2;

  }




 for(;j<=u-jo;j+=2  ){

                     if( !chkC(segment, j)   ){
                          if( j+jo -m <  d1 ){
                                   c1=m; c2=j+jo;
                                   d1=j+jo-m;
                                  }
                            if(j+jo - m>d2 ){
                                    c3=m;c4=j+jo;
                                    d2=j+jo-m;
                                  }
                         m=j+jo;

                         }
            }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 if(d1==10000)
     printf("There are no adjacent primes.\n");
 else
   printf("%lu,%lu are closest, %lu,%lu are most distant.\n",c1,c2,c3,c4);


}


    return 0;
    }

#include<iostream>
#include<cstdio>
#include<cmath>
#define max  10000002

using namespace std;

bool sts[max];
long m=10000000;
bool f=0;

int main(){

 unsigned long n, a,b,c,d,e,f,f1;

///////////////////////////////////////////////////////////////////////////////////////////////
           sts[2]=1;

   for(long i=3;i<=m;i+=2 )
                 sts[i]=1;

   long  m1=(long  )(sqrt(m) ) ;

     for(long i=3;i<=m1;i+=2 )
           if(sts[i]==1){
               for(long j=i*i ;j<=m;j+=i+i )
                    sts[j]=0;
                  }
///////////////////////////////////////////////////////////////////////////////////////////////////


while(scanf("%lu",&n ) == 1){

       f1=0;
  if( n<8  ){
          printf("Impossible.\n");
          continue;
         }
  else if(n==8 ){
     printf("2 2 2 2\n");
  continue;
   }
   else if(n==9 ){
       printf("2 3 2 2\n");
      continue;
    }

e=0;

if(n%2==1){
         c=2;d=3;
         b=n-5;
             for( long i= 3;i<=b/2 ;i+=2  ){
                          if(sts[i]   &&  sts[ b-i ]  ){
                              e=i; f=b-i;break;
                          }
                 }
             if(e==0 )
                      f1=1;
       }
else{

         a=n-4;
         c=2; d=2;

          for( long i= 3;i<=a/2 ;i+=2  ){
                      if(sts[i]   &&  sts[ a-i ]  ){
                          e=i; f=a-i;break;
                     }
               }

     }

if(f1==1 )
            printf("Impossible.\n");
else
   printf("%lu %lu %lu %lu\n",c,d,e,f );


    }



return 0;
}

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<vector>
#define max  10000002
using namespace std;

vector<unsigned long > pf;
vector<int >npf;
bool sts[max];



int main(){

unsigned long n,i;

unsigned long  m=10000000,n1,m1;

///////////////////////////////////////////////////////////////////////////////////////////////
           sts[2]=1;

    for(long i=3;i<=m;i+=2 )
                 sts[i]=1;

    m1=(long  )(sqrt(m) ) ;

     for(long i=3;i<=m1;i+=2 )
           if(sts[i]==1){
               for(long j=i*i ;j<=m;j+=i+i )
                    sts[j]=0;
                  }
//////////////////////////////////////////////////////////////////////////////////////////////////

while(scanf("%lu %lu",&m,&n)==2 ){
         n1=n;

         if(n==1){
                printf("%lu divides %lu!\n",n1,m);
               continue;
            }
          else if(n==0){
                  printf("%lu does not divide %lu!\n",n1,m);
                  continue;
                 }





m1=(long  )(sqrt(n) ) ;
int c=0;
if(n%2==0){
         while(n%2==0){
             n=n/2;
             ++c;
             }
     pf.push_back(2);
     npf.push_back(c);
 }


 for(long i=3;i<=m1;i+=2){
    if(sts[i]){
               if(n%i==0){
                             c=0;
                        while(n%i==0){
                                 n=n/i;
                                 ++c;
                              }
                     pf.push_back(i);
                     npf.push_back(c);
                }
            }
     }

     if(n>1){
                     pf.push_back(n);
                     npf.push_back(1);
         }


///////////////////////////////////////////////////////////////////////////////////////////////////


int   siz=pf.size()-1 , f=0 ;

/*
for(int i=0;i<pf.size();i++)
  printf("%lu  %d\n",pf[i],npf[i]);

printf("\n");
*/

if(pf[siz] > m )
     printf("%lu does not divide %lu!\n",n1,m);
else{



      for(int i=0;i<=siz;i++){
                 m1=m;
              unsigned long p=pf[i];
                c=0;

               while(m1/p > 0 ){
                          c+=m1/p;
                          m1=m1/p;
                     }

               if(npf[i] > c ){
                   f=1;
                   break;
                   }

          }

    if(f==0)
         printf("%lu divides %lu!\n",n1,m);
    else
          printf("%lu does not divide %lu!\n",n1,m);


 }




////////////////////////////////////////////////////////////////////////////////////////////////////


pf.clear();
npf.clear();

  }

    return 0;
    }



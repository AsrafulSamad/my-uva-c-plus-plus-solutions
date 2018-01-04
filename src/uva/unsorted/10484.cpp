#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<cmath>
#include<cstdlib>
#define max  10000002
using namespace std;



map<unsigned long ,int > pf;
map<unsigned long , int > ::  iterator pos;

bool sts[max],f;
vector<unsigned long > pf1;
vector<int >npf1;


inline void prime_factor(unsigned long n  ){
     long n1=n;

                  int  c=0;
                 while(n1/ 2 > 0 ){
                       c+=n1/2;
                       n1=n1/2;
                     }
                   pf[2]=c;

   for(long i=3;i<=n;i+=2){
         long n1=n;

        if(sts[i]){
                    c=0;
                 while(n1/ i > 0 ){
                       c+=n1/i;
                       n1=n1/i;
                     }
                   pf[i]=c;

                 }
           }
    }





int main(){

unsigned long n,i,n2,m2;

unsigned long  m=10000000,n1,m1,total ;

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

while(scanf("%lu %lu",&n,&m)==2){
    if(n==0 && m==0 )
           break;


if(n==0 || n==1  ){
    if(m>1)
      printf("0\n");
    else if(m==1)
      printf("1\n");
      continue;

    }




n2=n;m2=m;

///////////////////////////////////////////////////////////////

   if( n>= 2  )
   prime_factor(n);


if(m>=2){

m1=(long  )(sqrt(m) ) ;

int c=0;
if(m%2==0){
         while(m%2==0){
             m=m/2;
             ++c;
             }
     pf1.push_back(2);
     npf1.push_back(c);
 }


 for(long i=3;i<=m1;i+=2){
    if(sts[i]){
               if(m%i==0){
                             c=0;
                        while(m%i==0){
                                 m=m/i;
                                 ++c;
                              }
                     pf1.push_back(i);
                     npf1.push_back(c);
                }
            }
     }

     if(m>1){
                     pf1.push_back(m);
                     npf1.push_back(1);
         }


    }
 else {
                total=1;
                for ( pos = pf.begin(); pos != pf.end(); ++pos ){
                      //printf("%lu  %d \n",pos->first,pos->second  );

                       total   =    total * ( pos->second +1 )  ;


                 }

                printf("%lu\n",total);

    continue;


     }

////////////////////////////////////////////////////////////////////////////////////////////


                   int siz=pf1.size()-1;
                   f=1;

       if(  pf1[siz]   >  n2   ){
                printf("0\n");
                 }
        else{

               total=1;

            for(int i=0;i<pf1.size();i++ ){
                         if(npf1[i] >pf[ pf1[i]  ] ){
                                  f=0;
                                     break;
                             }
                             else{
                                 pf[ pf1[i]  ]  =pf[ pf1[i]  ] - npf1[i] ;
                                 }
                   }

          if(f==0 )
               printf("0\n");
           else  {

           for ( pos = pf.begin(); pos != pf.end(); ++pos ){
                      //printf("%lu  %d \n",pos->first,pos->second  );

                       total   =    total * ( pos->second +1 )  ;


                 }

                printf("%lu\n",total);

                 }

             }

///////////////////////////////////////////////////////////////////////////////////////////////////

   pf.clear();
   pf1.clear();
   npf1.clear();

   }


    return 0;
    }

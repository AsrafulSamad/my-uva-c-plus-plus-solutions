#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#define max 1000000000000

using namespace std;

bool sts[1000002];
unsigned long long alp[80071] ;


int  bser(unsigned long long  key) {
   int first=1,last=80070;
   while (first <= last) {
       int mid = (first + last) / 2;
       if (key > alp[mid])
           first = mid + 1;
       else if (key < alp[mid])
           last = mid - 1;
       else
           return mid;
      }
   return  (first );
}

int main(){

unsigned long long n,m;
int count,t;
long m2=1000001;

 ///////////////////////////////////////////////////////////////////////////////////////////////
           sts[2]=1;

    for(long i=3;i<=m2;i+=2 )
                 sts[i]=1;

  long  m1=(long  )(sqrt(m2) ) ;

     for(long i=3;i<=m1;i+=2 )
           if(sts[i]==1){
               for(long j=i*i ;j<=m2;j+=i+i )
                    sts[j]=0;
                  }
//////////////////////////////////////////////////////////////////////////////////////////////////

int j=1;
for(int i=2;i<=39;i++){
      alp[j]=(unsigned long long )( pow(2.0,i ) );
          j++;
       }

for(int i=3;i<1000001;i+=2){
    if(sts[i])
    for(int k=2;;k++){
             n=(unsigned long long  )pow(i*1.0,k );
          if(n>=1e12 )
                break;
          alp[j]=n;
          j++;
          }
    }

/////////////////////////////////////////////////////////////////////////////////////////////////

sort(alp+1,alp+j );

///////////////////////////////////////////////////////////////////////////////////////////////////

 std::cin>>t;

 while(t--){
          std::cin>>n>>m;
          count=0;
          std::cout<<bser(m)-bser(n)<<endl;
    }

return 0;
}

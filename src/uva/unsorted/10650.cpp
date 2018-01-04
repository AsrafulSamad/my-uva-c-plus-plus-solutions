#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

vector<int > prime ;
int N=32000;
bool sts[32005];

void sieve(){

     int sqrtn=(int)(sqrt((double)N));

     prime.push_back(2);

     for(int i=2;i<=N;i++) sts[i]=1;
     for( int i=3;i<=sqrtn;i+=2 )
       if(sts[i]){
           //cout<<i<<endl;
           for(int j=i*i;j<=N;j+=i+i)
             sts[j]=0;
           }

    }


int main(){

      sieve();
     for(int i=3;i<=N;i+=2)
       if(sts[i])
        prime.push_back(i);


     int l,h,li,hi,i,k;
     while(cin>>l>>h){
       if(h<l)
         swap(l,h);

       if(l==0 && h==0)
        break;

     int count=2,d;

     for( i=0;i<prime.size();i++){
           if(prime[i]>h)
              break;
           if(prime[i]<l)
              continue;

           if( prime[i+1]<=h )
              d=prime[i+1]-prime[i];

           if(prime[i+2]<=h){
               if(prime[i+2]-prime[i+1]==d){
                 ++count;
                 k=i;
                }
               else{

                   if(count>=3 && (prime[i+2]-prime[i+1] ) != (prime[i+1]-prime[i] ) && (prime[i-(count-2)]-prime[i-(count-2)-1] ) != (prime[i-(count-2)+1]-prime[i-(count-2)] )){
                       cout<<prime[i-(count-2)];
                      for(int j=i-(count-3);j<=i+1;j++ )
                          cout<<" "<<prime[j];
                          cout<<endl;
                       }


                   count=2;

                  }



             }

          }

                   if(count>=3 && (prime[k+3]-prime[k+2] ) != (prime[k+2]-prime[k+1] ) && (prime[k-(count-3)]-prime[k-(count-3)-1] ) != (prime[k-(count-3)+1]-prime[k-(count-3)] )){
                       cout<<prime[k-(count-3)];
                      for(int j=k-(count-4);j<=k+2;j++ )
                          cout<<" "<<prime[j];
                          cout<<endl;
                       }



     }

    return 0;
    }

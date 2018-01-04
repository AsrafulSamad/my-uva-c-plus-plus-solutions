#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace  std;

#define max 1000010
#define maxx 1002


inline int gcd(int a,int b)
{
        int temp;
        while (b)
        {
                temp=a%b;a=b;b=temp;
        }
        return a;
}




//int  coun[max];
bool sts[max];
int a,b,c,ccc;

/*

void pre(){


    memset(coun,0,sizeof(coun));

   for(int i=999;i>=1;--i)
     for(int j=1;j<i;j++){
         if( i*i+j*j > 1000000 )
            continue;

         if( gcd(i,j)==1 && ( i%2==0 || j%2==0 ) ){
             {
              ++coun[i*i+j*j];
             }
           }
         }
    for(int i=4;i<=1000000;i++)
         coun[i]+=coun[i-1];
 }

*/



int count_cc(int N){


     memset(sts,0,sizeof(sts));
     int cc=0;

    for(int i= (int) sqrt(N);i>=1;--i)
     for(int j=1;j<i;j++){

        if( i*i+j*j >N)
          continue;

         if( gcd(i,j)==1 && ( i%2==0 || j%2==0 )  ){
             {
               ++ccc;
                int k=1;
                a=i*i-j*j;
                b=2*i*j;
                c=i*i+j*j;
                while(k*c<=N){
                     sts[k*a]=sts[k*b]=sts[k*c]=1;
                  ++k;
                  }
             }
           }
         }

       for(int i=1;i<=N;i++)
         if(sts[i]<1)
            ++cc;

     return cc;

    }






int main(){

     int N;

   //  pre();


     while(scanf("%d",&N)!=EOF){
      ccc=0;
        printf("%d %d\n",ccc,count_cc(N));
     }


    return 0;
    }

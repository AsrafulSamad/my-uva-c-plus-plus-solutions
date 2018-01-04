#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int a[1005];
int d[1005];

int gcd(int u,int v){

    while(v>0){
        u=u%v;
        u^=v;
        v^=u;
        u^=v;
      }

   return u;

    }




int main(){

     int n,in;

      while(scanf("%d",&in) &&in){
            n=0;
            while(in){
              a[++n]=in;
              scanf("%d",&in);
             }

         for(int i=2;i<=n;i++)
            d[i-1]=abs(a[i]-a[i-1]);

         int g=d[1];

          for(int i=2;i<n;i++)
             g=gcd(g,d[i] );

         printf("%d\n",g);

       }






    return 0;
    }

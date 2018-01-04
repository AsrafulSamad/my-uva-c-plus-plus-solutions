#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define max 50005


unsigned long inp[max];
 unsigned long n,q,m,x,y,mid;
bool fr,fl;

void bs(){
    int h,l;
    l=1;h=n;
    mid=(h+l)/2;

    while( h-l>5 ){
        if(inp[mid]==m)
            return;
        else if(inp[mid]<m)
               l=mid;
        else
            h=mid;

        mid=(l+h)/2;

        }


      for(int i=l;i<=h;i++){
          if(inp[i]>m){
              mid=i-1;
              return;
              }
          }

        mid=h;

    }


int main(){

      scanf("%lu",&n);
      for(int i=1;i<=n;i++){
          scanf("%lu",&inp[i]);
          }

      scanf("%lu",&q);
      while(q--){
          scanf("%lu",&m);
          fr=1;fl=1;

           if(inp[n]<m){
               printf("%lu X\n",inp[n]);
               continue;
            }
           else if(inp[1]>m){
               printf("X %lu\n",inp[1]);
               continue;
            }

          bs();

          if(inp[mid]==m ){
                int k=mid;

                while(inp[k]==m && k<=n){
                   ++k;
                   }

                if(k>n||inp[k]==m)
                  fr=0;
                else
                  x=inp[k];


               k=mid;

              while(inp[k]==m && k>=1){
                   --k;
                   }

                if(k<1||inp[k]==m)
                  fl=0;
                else
                  y=inp[k];


              }

          else {
              y=inp[mid];
              if(mid<n)
                x=inp[mid+1];
              else
                fr=0;
              }


         if(fl)
            printf("%lu",y);
         else
            printf("X");
         if(fr)
            printf(" %lu\n",x);
         else
            printf(" X\n");




          }









    return 0;

    }

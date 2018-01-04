#include<cstdio>
#include<iostream>
#include<math.h>

using namespace std;

int main(){

     unsigned long int  n,a[35] ,m=1;
      int i,j,f;
        i=0;j=0;

      while(1000000000>=m  ){
              ++i;
             m = m+(unsigned long ) pow( 2, i  );
             a[++j] =m;

           }



  while(scanf("%lu",&n ) && n ){
           f=0;

               for(i=1;i<=29;++i){
                   if(a[i]==n ){
                       f=1;
                       break;
                       }
                   }

            if(f)
               printf("Bob\n");
            else
               printf("Alice\n");

        }



    return 0;
    }


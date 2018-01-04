#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
unsigned long n;
int t,a[10];
scanf("%d",&t);

while(t--){

       for(int i=0;i<=9;i++)
          a[i]=0;

         scanf("%lu",&n);

         if(n==0)
           printf("0\n");
         else if(n==1)
           printf("1\n");
         else{

               for(int j=9;j>=2;j--){
                        while(n%j==0){
                                 n=n/j;
                                 a[j]++;
                            }
                   }

            if(n==1){
             for(int i=2;i<=9;i++ )
                for(int j=1;j<=a[i];j++)
                   printf("%d",i );
              printf("\n");
              }

            else
               printf("-1\n");

             }
    }

return 0;
    }

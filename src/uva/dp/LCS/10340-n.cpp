#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char a[5000005] , b[5000005] ;


int main(){

   while(cin>>a>>b ){
        int i=0,j=0,n,m,f=0;
         n=strlen(a);
         m=strlen(b);

         if(n<=m)
          while(i<=n && j<=m ){
               if(a[i]==b[j])
                     ++i;
                     ++j;
                 }

        if(i>n)
             printf("Yes\n");
          else
             printf("No\n");


       }



    return 0;
    }

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
 long t,a,b,c,i;
  scanf("%ld",&t);

   for(i=1;i<=t;++i){
       scanf("%ld %ld %ld",&a,&b,&c);
       printf("Case %ld: ",i);

       if( a<0 || b<0 ||c<0 )
         printf("Invalid\n");
       else if( a+b<=c || b+c<=a || c+a<=b)
         printf("Invalid\n");
       else if( a==b && b==c )
         printf("Equilateral\n");
       else if( ( a==b && a!=c) || (a==c &&a!=b) || (c==b && a!=c))
         printf("Isosceles\n");
       else
         printf("Scalene\n");

       }

    return 0;
    }

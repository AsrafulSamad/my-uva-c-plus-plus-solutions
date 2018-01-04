#include<cstdio>
#include<iostream>
#include<stack>

using namespace std;

 bool isclap( int a  ){
    int b;
    if(a%7==0 ) return 1;

   do{
          if( a%10 == 7  ) return 1;
             a=a/10;

          }  while( a!=0 );

return 0;

    }

int main(){

 int n,m,k,i,j,c;



   while( 1  ){
           cin>>n; cin>>m; cin>>k;
           if(n==0 && m==0 && k==0) break;

               i=0;j=0;c=0;



            while(1){

                ++i;    ++j;


                    if(i ==m  ){

                           if(isclap(j ) ){
                                    ++c;

                                    if(c==k ) break;
                               }

                        }



                if(i==n ){

                    do{
                         --i; ++j;

                        if(i ==m  ){
                           if(isclap(j ) ){
                                    ++c;
                                if(c==k ) break;
                               }

                        }

                        }while( i !=1 );

                    }

                    if(c==k ) break;

                 }

printf("%d\n",j);


   }


    }




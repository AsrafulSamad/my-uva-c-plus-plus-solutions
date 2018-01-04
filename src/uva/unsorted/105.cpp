#include<cstdio>
#include<memory.h>
#include<iostream>
#define fl() freopen("input.txt","r",stdin )

using namespace std;

int main(){

           unsigned int a[10010],x1,x2,h,l=999,u=0;

memset(a,0,sizeof(a));

 fl();

   while(scanf("%u%u%u",&x1,&h,&x2)!=EOF ){
             if(x1< l ) l=x1;
             if(x2> u ) u=x2;
          for(int i=x1;i<x2;i++)
                  if(a[i]< h)
                     a[i]=h;
            }

printf("%u",l );
for( int i=l;;   ){

      h=a[i];
while( a[i] ==h  ) ++i ;

if(i>u)
   break;

    printf(" %u %u",h, i  );

  }


   printf(" 0\n");

     return 0;

  }

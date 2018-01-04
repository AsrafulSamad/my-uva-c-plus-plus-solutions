#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;


int main(){
      unsigned long a,b;
      while(scanf("%lu %lu",&a,&b)==2){

          printf("%lu\n",(~a&b)|(~b&a));
          }



    return 0;
    }

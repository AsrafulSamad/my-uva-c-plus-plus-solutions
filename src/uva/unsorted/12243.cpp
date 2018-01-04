#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>

using namespace std;



int main(){

          char c,d;
          int f ;

          while(1){
                  scanf("%c",&d);
                  if( d =='*' ) break;
                   d=toupper(d);

                   f=1;

                while(1){
                    scanf("%c",&c);
                    if(c=='\n') break;

                  if(c==' ' ){
                        scanf("%c",&c);
                        if(d!=toupper(c)){
                            f=0;
                            }
                            }
                   }



          if(f==1)
            printf("Y\n");
          else
            printf("N\n");



                   }



    return 0;
    }

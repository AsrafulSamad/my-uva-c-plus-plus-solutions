#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;
   char c[5];




int main(){


    int i,j,k,t,l;

          scanf("%d\n",&t);
       i=0;
     while(t--){
          scanf("%s",&c);
          l=strlen(c);
     if(l==5 )
        printf("3\n");
     else{
            if(c[0]  =='o' && c[1]=='n'  )
               printf("1\n");
            else if(c[0]=='o' && c[2]=='e' )
              printf("1\n");
            else if(c[1]=='n'&& c[2] =='e' )
               printf("1\n");
             else
               printf("2\n");
         }





         }








    return 0;
    }

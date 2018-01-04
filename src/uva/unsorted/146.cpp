

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;


int main(){
    char a[52],b[52];
     bool f;

    while(gets(a)){
      f=0;
       if(a[0]=='#')
         break;

       int l=strlen(a);


       for(int i=0;i<l;i++)
         b[i]=a[i];

       sort(b,b+l);


       next_permutation (a,a+l);


       for(int i=0;i<l;i++){

           if(a[i]!=b[i]){

               cout<<a<<endl;

               f=1;

               break;

               }

           }

        if(f==0)
            printf("No Successor\n");




        }

    return 0;
    }




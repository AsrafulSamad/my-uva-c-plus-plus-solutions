#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


unsigned long long catalan(unsigned long long n){

    if (n==0) return 1;
    else  return ((4*n-2)*catalan(n-1))/(n+1);

}


unsigned long long a[21];

int main(){

    unsigned long long n;
    bool f=0;

     for(int i=0;i<=20;i++){
        a[i]=catalan(i);
        //cout<< i <<"  "<<catalan(i)<<endl;

      }
    while(cin>>n){
       for(int i=1;i<=20;i++)
         if(a[i]==n){
             cout<<i<<endl;
             break;
             }

    }



    return 0;
    }

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


long catalan(long n){

    if (n==0) return 1;
    else  return ((4*n-2)*catalan(n-1))/(n+1);

}




int main(){

    long n;
    bool f=0;
    while(cin>>n){
      if(f)
        cout<<endl;
        f=1;
     cout<<catalan(n)<<endl;

     }



    return 0;
    }

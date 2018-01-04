#include<iostream.h>

void pr(unsigned long n){
    unsigned long m;
    if(n==0){

        }
    else{
        m=n%3;
        n=n/3;
        pr(n);
        cout<<m;
        }
    }



int main(){

    unsigned long n1;
    long long n;

    while(1){
        cin>>n;

        if(n<0)break;
        n1=(unsigned long)n;
        if(n1==0)
         cout<<"0";
        else
         pr(n1);
        cout<<"\n";
        }

    return 0;
    }

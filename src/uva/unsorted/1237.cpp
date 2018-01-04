#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

struct N{
    string  s;
    unsigned long a,b;
    }  d[10002];


int main(){

int t,n,m,j,c;
unsigned long z;
cin>>t;

for(int k=1;k<=t;k++){
  cin>>n;
  for(int i=1;i<=n;i++)
        cin>>d[i].s>>d[i].a>>d[i].b;
  cin>>m;

 for(int i=1;i<=m;i++){
         cin>>z;
         c=0;j=0;

         for(int l=1;l<=n;l++){
               if( z >=d[l].a  && z<=d[l].b  )
                        { c++;  j=l; }
                     }

            if(  c==1  )
                  cout<<d[j].s<<endl;
             else
                  cout<<"UNDETERMINED\n";

       }

  if(k!=t )
    cout<<endl;

 }

    return 0;

 }

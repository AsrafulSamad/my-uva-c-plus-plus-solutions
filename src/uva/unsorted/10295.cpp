#include<iostream>
#include<map>
#include<sstream>

using namespace std;

int main(){
 long n,m,i,s,d;
 map<string,long>a;
 string k;
scanf("%lu %lu\n",&n,&m);

for(i=1;i<=n;++i){
   cin>>k;
   cin>>d;
  a[k]=d;
 }

for(i=1;i<=m;++i){
s=0;

  while(1){
    cin>>k;
    if(k[0]=='.')break;
    s=s+a[k];
    }
   cout << s <<endl;

    }

return 0;
    }

#include<iostream>
#include<map>
#include <sstream>
using namespace std;

int main(){

    map<string,string>a;
    string line,x;
   for (;;) {
      getline(cin, line);

      istringstream is(line);
      string s1, s2;
      if (!(is >> s1 >> s2)) break;
      a[s2]=s1;
     }

   while(cin>>x){
      if(a[x]!="\0")
     cout<<a[x]<<endl;
      else
       cout<<"eh"<<endl;
       }


return 0;
    }

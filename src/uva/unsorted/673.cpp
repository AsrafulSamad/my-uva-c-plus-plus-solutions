#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
#include<map>
#include<cstring>

using namespace std;


int main(){
   int t;
   char c;
   map<char,bool> m;
   map<char,char> mm;

   m['(']=true;
   m['[']=true;
   m[')']=false;
   m[']']=false;

   mm[')']='(';
   mm[']']='[';

    scanf("%d%c",&t,&c);
    char st[130];

   while(t--){
    stack<char> s;
    bool is=1;
    gets(st);
    for(int i=0;i<strlen(st);i++){
         if(m[st[i]]){
            s.push(st[i]);
             }
         else{
             if(!s.empty()){
                char ch=s.top();
                s.pop();
                if(mm[st[i]]!=ch){
                  is=0;
                  break;
                 }
              }
              else{
                 is=0;
                 break;
              }
            }

        }
      if(is && s.empty() )
        cout<<"Yes\n";
      else
        cout<<"No\n";

     }


    return 0;
    }

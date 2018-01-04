#include<iostream>
#include<stdio.h>
#include<map>
#include<string.h>

using namespace std;

map<string,int> mp;
string st,s;

int main(){

int t,i,j,n,m,k;
scanf("%d",&t);
for(i=1;i<=t;++i){
  scanf("%d",&n);

for(j=1;j<=n;++j){
     cin>>st>>k;
    mp[st]=k;
    }

cin>>m>>st;

if(mp[st]==0)
 printf("Case %d: Do your own homework!\n",i);
else if(mp[st]<=m)
 printf("Case %d: Yesss\n",i);
else if(mp[st]<=m+5)
 printf("Case %d: Late\n",i);
else
 printf("Case %d: Do your own homework!\n",i);


mp.clear();
}


return 0;
    }

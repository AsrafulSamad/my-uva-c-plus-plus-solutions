#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int i,j,k,n,b[105],id=0;

while(scanf("%d",&n)!=EOF){

  bool a[20002]={0};

 k=0;
 scanf("%d",&b[1]);

if(b[1]<=0) k=1;

for(i=2;i<=n;++i){
  scanf("%d",&b[i]);
  if( b[i]<0 || b[i]<=b[i-1] )
    k=1;
}

if(k==1){
   printf("Case #%d: It is not a B2-Sequence.\n\n",++id);
continue;
}


for(i=1;i<=n;++i){
 for(j=i;j<=n;++j){
     if(a[b[i]+b[j]]==1){
         k=1;break;
         }
       a[b[i]+b[j]]=1;
     }
if(k==1) break;
}

if(k==1)
 printf("Case #%d: It is not a B2-Sequence.\n\n",++id);

else
 printf("Case #%d: It is a B2-Sequence.\n\n",++id);

 }

return 0;
    }

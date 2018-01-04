#include<iostream>
#include<cstring>
#include<memory.h>
#include<cstdio>

using namespace std;



int main(){
int a[55];
char ch[300];

while(cin.getline(ch,256)){

    memset(a,0,sizeof(a));

    int l=strlen(ch);

    for(int i=0;i<l;i++)
       {
           if(ch[i]>='A' && ch[i]<='Z')
                  ++a[ ch[i]-'A'+1];
           else if(ch[i]>='a' && ch[i]<='z')
                  ++a[27+ch[i]-'a'];

           }
/*
           for(int i=1;i<=52;i++)
              printf("%d %d\n",i,a[i]);
*/


           int ans=0;
           for(int i=1;i<=52;i++)
              ans=max(ans,a[i]);

           for(int i=1;i<=26;i++)
              if(ans==a[i])
               printf("%c",'A'+i-1);
           for(int i=27;i<=52;i++)
              if(ans==a[i])
               printf("%c",'a'+i-27);
           printf(" %d\n",ans);


    }

    return 0;
    }

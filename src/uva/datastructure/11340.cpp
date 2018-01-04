#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<map>

using namespace std;

map<char,int > m;

int main(){

char a[10010],b;
int t,n,l,k,sum,r;

scanf("%d",&t);

while(t--){
       scanf("%d\n",&k);
        for(int i=1;i<=k;++i){
            scanf("%c %d\n",&b,&n);
               m[b]=n;
            }
         scanf("%d\n",&n);
                                   sum=0;
         for(int j=1;j<=n;++j){
             gets(a);
             l=strlen(a);
               for(int i=0;i<l;++i)
                  sum+=m[a[i]];
             }


    printf("%.2lf$\n",(double)(((1.0)*sum)/100) );

       m.clear();

    }









    return 0;
    }

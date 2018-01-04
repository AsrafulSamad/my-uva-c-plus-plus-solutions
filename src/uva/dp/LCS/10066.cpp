#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>

using namespace std;

int c[110][110],N,M,l,Y[110],X[110];
char b[110][110];

void lcs(){

 for(int i=1;i<=M;++i)
      c[i][0]=0;
 for(int i=0;i<=N;++i)
      c[0][i]=0;

for(int i=1;i<=M;++i)
   for(int j=1;j<=N;++j){
        if(X[i]==Y[j] ){
                     c[i][j]=c[i-1][j-1]+1;
                     b[i][j]='d';
                   }
         else if(c[i-1][j]>=c[i][j-1]){
                   c[i][j]=c[i-1][j];
                   b[i][j]='u';
                   }
         else {
                   c[i][j]=c[i][j-1];
                   b[i][j]='l';
                   }
    }
}

void print(int i,int j){
        if(i==0 || j==0 )
           return ;
        if(b[i][j]=='d' ){
              print(i-1,j-1);
              ++l;
           }
        else if(b[i][j]=='u' )
              print(i-1,j);
        else if(b[i][j]=='l' )
              print(i,j-1);
     }

int main(){
    int kase =0;
     while(scanf("%d %d",&M,&N)){
         ++kase;
         if(M==0 && N==0 )
           break;

   for(int i=1;i<=M;++i)
        scanf("%d",&X[i]);
   for(int i=1;i<=N;++i)
        scanf("%d",&Y[i]);

 l=0;
 lcs();


 print(M,N);
 printf("Twin Towers #%d\n",kase);
 printf("Number of Tiles : %d\n\n",l);


     }
    return 0;

}

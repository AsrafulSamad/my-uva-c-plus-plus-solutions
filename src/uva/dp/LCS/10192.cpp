#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;

int c[110][110],N,M,c1;
char X[110] , Y[110],b[110][110],x[110],y[110];

void lcs(){

 for(int i=1;i<=M;++i)
      c[i][0]=0;
 for(int i=0;i<=N;++i)
      c[0][i]=0;

for(int i=1;i<=M;++i)
   for(int j=1;j<=N;++j){
        if(X[i]==Y[j] ){
                     c[i][j]=c[i-1][j-1]+1;
                     b[i][j]='|';
                   }
         else if(c[i-1][j]>=c[i][j-1]){
                   c[i][j]=c[i-1][j];
                   b[i][j]='>';
                   }
         else {
                   c[i][j]=c[i][j-1];
                   b[i][j]='<';
                   }
    }
}

void print(int i,int j){
        if(i==0 || j==0 )
           return ;
        if(b[i][j]=='|' ){
              print(i-1,j-1);
              ++c1;
           }
        else if(b[i][j]=='>' )
              print(i-1,j);
        else if(b[i][j]=='<' )
              print(i,j-1);
     }

int main(){
      int k=0;
      while(1){
          c1=0;
      gets(x);
    if(x[0]=='#'  )
        break;
      gets(y);
      M=strlen(x);
      N=strlen(y);
   for(int i=0;i<M;++i)
         X[i+1]=x[i];
   for(int i=0;i<N;++i)
         Y[i+1]=y[i];
   lcs();
  print(M,N);
  printf("Case #%d: you can visit at most %d cities.\n",++k,c1);

 }
    return 0;

}

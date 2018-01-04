#include<stdio.h>
#include<iostream>
#define INF 999999999

using namespace std;


unsigned long m[20][20],s[20][20];
unsigned long p[20];
 unsigned long n,x,y,kase=0;

void mtx(){

     for(int i=1;i<=n;++i)
           m[i][i]=0;

for(int l=2;l<=n;++l){

       for(int i=1;i<=n-l+1;++i){
                 int j=i+l-1;
                 m[i][j]=INF;

                 for(int k=i;k<=j-1;++k){
                        int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                        if(q<m[i][j]){
                              m[i][j]=q;
                              s[i][j]=k;
                            }

                     }
           }
      }
}

void  pa(unsigned long  i,unsigned long  j ){
    if(i==j)
       printf("A%lu",i);
    else{
           printf("(");
            pa(i,s[i][j]);
            printf(" x ");
            pa(s[i][j]+1,j);
           printf(")");
        }
}

int main(){

while(scanf("%lu",&n)&&n){


  for(unsigned long  i=0;i<n;++i){
    scanf("%lu%lu",&x,&y);
    p[i]=x;
    }
  p[n]=y;

   mtx();

   printf("Case %lu: ",++kase);
   pa(1,n);
   printf("\n");

}

return 0;

}


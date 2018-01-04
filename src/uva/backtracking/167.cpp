#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x[10],c=0,y[100][10];

int  place(int k, int i){
       for(int j=1;j<=k-1;j++)
           if(x[j]==i  || abs(x[j]-i)== abs(j-k)  )
              return 0;
           return 1;
    }

void nqueen(int k , int n){

     for(int i=1;i<=n;++i){
          if(place(k,i)){
                   x[k]=i;
                 if(k==n){
                     for(int o=1;o<=8;++o)
                        y[c][o]=x[o];
                      ++c;
                     }
                else
                   nqueen(k+1,n);
              }
          }

    }

int main(){
    int a[10][10],t;
     c=1;
    nqueen(1,8);

    scanf("%d",&t);
     c=c-1;

        while(t--){
        for(int i=1;i<=8;++i)
          for(int j=1;j<=8;++j)
            scanf("%d",&a[i][j]);
               int fmax=0;

         for(int i=1;i<=c;++i ){
                int max=0;
                for(int j=1;j<=8;++j)
                   max=max+a[j][y[i][j]] ;
                 if(max>fmax)
                     fmax=max;
                }
               printf("%5d\n",fmax);

       }


   return 0;
    }


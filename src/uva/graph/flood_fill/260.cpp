#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

#define max 10000

char a[max][max],b[max][max];
bool  seen[max][max];
int N;

void init(){
   for(int i=0;i<N;++i )
     for(int j=0;j<N;++j){
        seen[i][j]=false ;
        b[i][j]='s';
       }
    }


 void flood ( int i, int j, char color ) {
    if( i<0 || i>=N || j<0 || j>=N || seen[i][j] || a[i][j]!=color )
             return;

    seen[i][j] = true;
    b[i][j]=color;

    flood( i-1, j-1, color );
    flood( i-1, j, color );
    flood( i, j-1, color );
    flood( i, j+1, color );
    flood( i+1, j, color );
    flood( i+1, j+1, color );

   }

  int main (){
      int i,j,co=0;
      bool f;
    while(( cin>> N ) && N ){
           for(i=0;i<N;++i)
               cin>>a[i];

            init();

        for(i=0;i<N;++i)
               if(!seen[i][0] )
                    flood(i,0,'w' );

        for(j=0;j<N;++j)
               if(!seen[0][j] )
                    flood(0,j,'b' );
          f=0;
           j=N-1;
        for(i=0;i<N;++i )
            if(b[i][j]=='w' ){
               f=1;
             break;
             }

    if(f==1)
      cout<<++co<<" "<<"W"<<endl;
    else
       cout<<++co<<" "<<"B"<<endl;

     }

return 0;
  }






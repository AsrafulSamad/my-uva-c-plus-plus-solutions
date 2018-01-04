#include<iostream.h>

int main(){
    int n,m,i,j,c,k=0;
       char a[101][101];
    while(scanf("%d %d",&n,&m)){

      if(n==0 && m==0) break;
         k++;
         for(i=0;i<n;i++)
           for(j=0;j<m;j++){
                  cin>> a[i][j];
                if(a[i][j]!='*') a[i][j]='0';
                }

           for(i=0;i<n;i++)
             for(j=0;j<m;j++)
              {
            if(a[i][j]!='*'){
                c=0;

            if(j+1<m)
                   if(a[i][j+1]=='*') ++c;
            if(j-1>=0)
                   if(a[i][j-1]=='*') ++c;
            if(i+1<n)
                   if(a[i+1][j]=='*') ++c;
            if(i-1>=0)
                   if(a[i-1][j]=='*') ++c;

            if(i+1<n && j+1<m)
                   if(a[i+1][j+1]=='*') ++c;
            if(i+1<n && j-1>=0)
                   if(a[i+1][j-1]=='*') ++c;
            if(i-1>=0 && j+1<m)
                   if(a[i-1][j+1]=='*') ++c;
            if(i-1>=0 && j-1>=0 )
                   if(a[i-1][j-1]=='*') ++c;

                if(c>0)
                  a[i][j]=c+48;
                               }

                            }
if(k>1)
 cout<<endl;
    cout<<"Field #"<<k<<":"<<endl;
    for(i=0;i<n;i++){
       for(j=0;j<m;j++)
         cout<<a[i][j];
         cout<<endl;
            }
        }

    return 0;
    }

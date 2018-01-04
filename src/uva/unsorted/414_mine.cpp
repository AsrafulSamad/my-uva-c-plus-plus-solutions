#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

 int n,i,total,min,m,c;

 char ch[40],sh[20];

      while(gets(sh)){
            sscanf(sh,"%d",&n);
            m=n;
           if(n==0)
             break;

          min=999999;
          total=0;

          while(n--){
            gets(ch);
            c=0;

           for(int j=0;j<25;j++)
               if(ch[j]==' ')
                   ++c;

            if(c<min)
               min=c;
              total+=c;

           }

          cout<<total-(min*m)<<endl;;

          }


    return 0;
    }



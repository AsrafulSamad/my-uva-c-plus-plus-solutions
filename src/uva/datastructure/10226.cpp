#include<cstdio>
#include<iostream>
#include<map>
#include<string>
#include<cstring>


using namespace std;

#define fl() freopen("s.txt","r",stdin)


int main(){

    int t;
    char ch,c[200];

    scanf("%d",&t);

     ch=getchar();
     ch=getchar();

    while(t--){

    map< string ,int>  a;

      while(gets(c)){
       if(c[0]=='\0')
          break;
         string    s (c, strlen(c));
         a[s]++;
        }


   map< string ,int>  :: iterator pos;
      double f;
       int sum=0;
    for (pos = a.begin(); pos != a.end(); ++pos){
           sum+=pos->second;
       }

    for (pos = a.begin(); pos != a.end(); ++pos){
            cout<<pos->first;
            printf(" %.4lf\n", (double)( (double)(pos->second)/sum *100 ) );
       }

     if(t!=0)
       printf("\n");
  }
    return 0;
    }

#include<iostream.h>
#include<string.h>
int main(){

   char a[1001];
   char b[2];
   strcpy(b,"0");
   int i,j,l,k,m;
while(1){
    cin>>a;
    j=0;k=0;
    if(!strcmp(a,b)) break;
        l=strlen(a);
      for(i=0;i<l;i++){
          if(i%2==0)
              j=j+(a[i]-48);
          else
              k=k+(a[i]-48);
          }
      m=j-k;
      if(m==0)
         cout<<a<<" is a multiple of 11."<<endl;
       else if(m%11==0)
         cout<<a<<" is a multiple of 11."<<endl;
       else
          cout<<a<<" is not a multiple of 11."<<endl;


    }

    return 0;
    }

#include<stdio.h>
#include<string.h>

int main(){
   int l,i,c,f;
   char a[100];
while(gets(a)){
    l=strlen(a);
    c=0;f=1;
 for(i=0;i<=l;++i){
    if((a[i]>=97 && a[i]<=122)||(a[i]>=65 && a[i]<=90)){
        f=0;continue;
        }
    if(f==0)
      ++c;
    f=1;
    }
printf("%d\n",c);
}
return 0;
    }

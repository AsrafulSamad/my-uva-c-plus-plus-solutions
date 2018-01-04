#include<stdio.h>

int main(){

int t,i;
unsigned long int a,b;
char c='<', d=' >', e='=';

scanf("%d", &t);
for(i=1;i<=t;i++){
    scanf("%lu %lu",&a,&b);
    if(a<b)
      printf("%c\n",c);
    else if(a>b)
      printf("%c\n",d);
    else
      printf("%c\n",e);
    }
return 0;
    }

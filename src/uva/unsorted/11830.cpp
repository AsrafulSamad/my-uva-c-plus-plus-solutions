#include<stdio.h>
#include<string.h>

int main(){

int a,i,f,l,j;
char n[102],c;

for(;;){
    scanf("%d ",&a);
    gets(n);

    if(a==0 && n[0]=='0' && n[1]=='\0')
        break;

c=a+48;
l=strlen(n);

f=0;j=0;

for(i=0;i<l;++i){

if(n[i]!=c && n[i]!='0')
  f=1;

if(n[i]!=c && f==1){
  printf("%c",n[i]);
 j=1;
 }

}

if(j==0)
 printf("0");

printf("\n");


}

return 0;

}

#include<stdio.h>
#include<string.h>

int prime( int n1){
int i;
    if (n1==1) return 0;
    if (n1==2)  return 1;
    if (n1%2==0) return 0;
    for(i=3;i*i<=n1;i+=2)
      if(n1%i==0)
         return 0;
      return 1;
    }

int main(){
int n,i,j,k,l,b[70],f;
char c[2010];

scanf("%d\n",&n);
for(j=1;j<=n;++j){

  for(i=1;i<=65;++i)
    b[i]=0;

    gets(c);
    l=strlen(c);

   for(i=0;i<=l;++i){
     if(c[i]>=48&&c[i]<=57)
       b[c[i]-47]+=1;
     else if(c[i]>=65&&c[i]<=90){
         b[c[i]-54]+=1;
         }
     else if(c[i]>=97&&c[i]<=122){
         b[c[i]-60]+=1;
         }
     }

f=0;
printf("Case %d: ",j);
for(i=1;i<=62;++i){
 if(prime(b[i])==1){
     f=1;
     if(i<=10)
      printf("%c",(char)(i+47));
     else if(i>=11&&i<=36)
      printf("%c",(char)(i+54));
     else
      printf("%c",(char)(i+60));

     }

}

if(f==0)
 printf("empty");
printf("\n");

}


return 0;
    }

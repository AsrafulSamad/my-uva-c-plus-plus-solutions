#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 102

char fir[MAX][MAX],sec[MAX],res[MAX][MAX],result[MAX][MAX];
int n,i;


void reverse(char *from, char *to ){
int len=strlen(from);
int l;
for(l=0;l<len;l++)
to[l]=from[len-l-1];
to[len]='\0';
}



void call_sum(){

char F[MAX], S[MAX], Res[MAX],tem1[MAX],tem2[MAX];
int f,s,sum,extra,now;

f=strlen(fir[i]);
s=strlen(result[i]);

strcpy(tem1,fir[i]);
strcpy(tem2,result[i]);

reverse(tem1,F);
reverse(tem2,S);

for(now=0,extra=0;(now<f && now<s);now++){
sum=(F[now]-'0') + (S[now]-'0') + extra;
Res[now]=sum%10 +'0';
extra= sum/10;
}

for(;now<f;now++){
sum=F[now] + extra-'0';
Res[now]=sum%10 +'0';
extra=sum/10;
}

for(;now<s;now++){
sum=S[now] + extra-'0';
Res[now]=sum%10 +'0';
extra=sum/10;
}

if(extra!=0) Res[now++]=extra+'0';
Res[now]='\0';
if(strlen(Res)==0) strcpy(Res,"0");

strcpy(tem1,"0");

reverse(Res,tem1);

strcpy(result[i+1],tem1);

}



int main(){

n=0;

while(scanf("%s",&fir[n]) && strcmp(fir[n],"0"))
      ++n;


strcpy(result[0],"0");

for(i=0;i<n;i++)
 call_sum();



int len=strlen(result[n]);


for(int i=0;i<len;i++) printf("%c",result[n][i]);
printf("\n");

return 0;
}

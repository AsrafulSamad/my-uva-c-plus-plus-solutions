#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int isbig(char x[],char y[],int l1,int l2){

       if(l1>l2)
        return 1;
      if(l2>l1)
        return 0;

for(int i1=0;i1<l1;++i1){
       if(x[i1]>y[i1])
         return 1;
       if(x[i1]<y[i1])
         return 0;
         }
return 3;
    }


int main()
{
 char a[1005],b[1005],a1[1005];

char *fibo[5001]={0};
fibo[0]="1";
fibo[1]="2";
int l1=strlen(fibo[0]);
int l2=strlen(fibo[1]);
int l;
for(long i=2;i<=5000;i++)
{
char str[10000];
if(l1>=l2)l=l1;
else l=l2;
int ca=0;
long j,k,m,p;
for(j=l1-1,k=l2-1,m=0,p=0;p<l;j--,k--,m++,p++)
{
int s1;
if(j<0)fibo[i-2][j]='0';
s1=fibo[i-2][j]-48;
int s2;
if(k<0)fibo[i-1][k]='0';
s2=fibo[i-1][k]-48;
int ans=0;
ans+=s1+s2+ca;
if(ans>9)
{
str[m]=(ans-10)+48;
ca=1;
}
else
{
str[m]=ans+48;
ca=0;
}
}
if(ca>0){str[m]=ca+48; m++;}
str[m]='\0';
fibo[i]=new char[m+1];
long y=0;
for(long x=m-1;x>=0;x--,y++)fibo[i][y]=str[x];
fibo[i][y]='\0';
l1=strlen(fibo[i-1]);
l2=strlen(fibo[i]);
}
int n;
int count;
while(scanf("%s %s",&a,&b))
{
if(a[0]=='0'&&b[0]=='0')
    break;
count=0;

  int al=strlen(a);
  int bl=strlen(b);
  int c;
  int ii;

 if(isbig(a,b,al,bl)==1){
     strcpy(a1,a);
     strcpy(a,b);
     strcpy(b,a1);
     al^=bl^=al^=bl;
     }


for(ii=0;ii<5000;++ii){
 c=strlen(fibo[ii]);
if(isbig(a,fibo[ii],al,c)==1)
  continue;
if(isbig(fibo[ii],b,c,bl)==1)
  break;
++count;

    }
cout<<count<<endl;
}


return 0;
}

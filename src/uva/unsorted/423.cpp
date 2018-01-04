#include<stdio.h>
#include<stdlib.h>
#define INF 99999999
int main()
{
char ch[7];
int i,j,k,spath,n,a[101][101];
while((scanf("%d",&n))==1)
{

for(i=1;i<=n;i++)
{
j=0;
a[i][i]=0;
while(++j<i)
{
scanf("%s",ch);
if(ch[0]=='x')
a[i][j]=a[j][i]=INF;
else
a[i][j]=a[j][i]=atoi(ch);
}
}

for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(a[i][j]>a[i][k]+a[k][j])
a[i][j]=a[i][k]+a[k][j];

spath=0;
for(j=2;j<=n;j++)
if(spath<a[1][j])
spath=a[1][j];
printf("%d\n",spath);

}
return 0;
}

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define INF 99999999
using namespace std;
int main(){
char x,y,z,w,d,ch[30],ch1[30];
int i,j,k,n,c,m,a[32][32],b[32][32],cost[28],l,k1;

while(1){

cin>>m;
d=getchar();
if(m==0) break;

for(i=1;i<=26;++i){
ch[i]='a';
cost[i]=INF;
}
for(i=1;i<=30;++i){
for(j=i;j<=30;++j)
a[i][j]=a[j][i]=b[i][j]=b[j][i]=INF;
a[i][i]=b[i][i]=0;
}


for(i=1;i<=m;++i){

z=getchar();w=getchar();w=getchar();x=getchar();x=getchar();
y=getchar();y=getchar(); cin>>c; d=getchar();

for(j=1;j<=26;++j){
if(x==ch[j]) { l=j; break; }
if(ch[j]=='a') { ch[j]=x; l=j; n=j; break;}
}

for(j=1;j<=26;++j){
if(y==ch[j]) { k=j; break; }
if(ch[j]=='a') { ch[j]=y; k=j; n=j; break;}
}



if(z=='Y'){
if(w=='U'){
if(a[l][k]>c)
a[l][k]=c;

}
else{
if(a[l][k]>c)
a[l][k]=a[k][l]=c;
}

}
else{
if(w=='U'){
if(b[l][k]>c)
b[l][k]=c;

}
else{
if(b[l][k]>c)
b[l][k]=b[k][l]=c;
}
}

}


for(k=1;k<=n;++k)
for(i=1;i<=n;++i)
for(j=1;j<=n;++j){
if(a[i][j]>a[i][k]+a[k][j])
a[i][j]=a[i][k]+a[k][j];

if(b[i][j]>b[i][k]+b[k][j])
b[i][j]=b[i][k]+b[k][j];
}


x=getchar(); d=getchar(); y=getchar(); d=getchar();

int min=INF; j=-1;c=0;

l=-1;k=-1;

for(j=1;j<=n;++j)
if(x==ch[j]) { l=j; break; }
for(j=1;j<=n;++j)
if(y==ch[j]) { k=j; break; }

k1=k;
if(l!=-1 && k!=-1)
for(i=1;i<=n;++i){
cost[i]=a[l][i]+b[k][i];
if(cost[i]<=min){
j=i;min=cost[i];

}

}

c=0;
for(i=1;i<=26;++i)
if(cost[i]==min && min!=INF)
++c;


k=0;
if(c>0)
for(i=1;i<=26;++i)
if(min==cost[i]){
ch1[++k]=ch[i];
}

for(i=1;i<k;++i)
for(l=i+1;l<=k;++l)
if(ch1[i]>ch1[l])
ch1[i]^=ch1[l]^=ch1[i]^=ch1[l];

if(k1==-1 && l!=k1)
printf("You will never meet.\n");
else if(l==-1 && l!=k1)
printf("You will never meet.\n");
else if(l==-1 && k1==-1 && x==y)
printf("0 %c\n",x);
else if(l==-1 && k1==-1 && x!=y)
printf("You will never meet.\n",x);
else if(c==0)
printf("You will never meet.\n");
else{
printf("%d ",min);
j=1;
for(i=1;i<c;++i){
printf("%c ",ch1[i]);
j=i+1;
}
printf("%c\n",ch1[j]);
}
}
return 0;

}

#include<stdio.h>
#include<stdlib.h>
#define INF 99999999

int main(){

int t,i,j,k,a[103][103],c,u,v,n,m,max1;
scanf("%d",&t);

for(int l=1;l<=t;++l){
scanf("%d %d",&n,&m);

for(i=1;i<=n;++i){
for(j=i;j<=n;++j)
a[i][j]=a[j][i]=INF;
a[i][i]=0;
}

for(i=1;i<=m;++i){
scanf("%d %d %d",&u,&v,&c);
if(a[u][v]>c)
a[u][v]=a[v][u]=c;
}


for(k=1;k<=n;++k)
for(i=1;i<=n;++i)
for(j=1;j<=n;++j)
if(a[i][j]>a[i][k]+a[k][j])
a[i][j]=a[i][k]+a[k][j];

u=0;v=0;
for(i=6;i<=n;++i){
int f=0;c=a[1][i];

for(j=2;j<=5;++j)
if(a[j][i]!=c || c==INF )
{ f=1; break; }

if(v==0&&f==0)
{ u=i; v=1;}

if(v==1 && f==0 ){
max1=0;
for(k=1;k<=n;++k)
if(max1<a[k][u])
max1=a[k][u];
int max2=0;
for(k=1;k<=n;++k)
if(max2<a[k][i])
max2=a[k][i];
if(max2<max1){
u=i;
max1=max2;
}
}

}

if(v==1 && max1!=INF)
printf("Map %d: %d\n",l,max1);
else
printf("Map %d: -1\n",l);

}
return 0;
}

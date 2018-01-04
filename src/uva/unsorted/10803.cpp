#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define INF 99999999

int main(){
int t,n,i,j,k,l=0;
double a[103][103],x[102],y[102],r;
scanf("%d",&t);

while(t--){
scanf("%d",&n);

for(i=1;i<=n;++i)
scanf("%lf %lf",&x[i],&y[i]);

for(i=1;i<=n;++i){
for(j=i+1;j<=n;++j)
a[i][j]=a[j][i]=INF;
a[i][i]=0;
}

for(i=1;i<=n;++i)
for(j=1;j<=n;++j){
if(i!=j){
r=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
if(r*r<=100.0000001)
a[i][j]=a[j][i]=r;
}
}

for(k=1;k<=n;++k)
for(i=1;i<=n;++i)
for(j=1;j<=n;++j)
if(a[i][j]>a[i][k]+a[k][j])
a[i][j]=a[i][k]+a[k][j];

r=0;int f=0;
for(i=1;i<=n;++i)
for(j=i+1;j<=n;++j){
if(a[i][j]==INF)
{
f=1;
break;
}
if(r<a[i][j])
r=a[i][j];
}

printf("Case #%d:\n",++l);
if(f==0)
printf("%.4lf\n",r);
else
printf("Send Kurdy\n");
printf("\n");

}

return 0;
}

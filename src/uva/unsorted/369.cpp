#include<stdio.h>
#include<math.h>


double nCr(int n,int m)
{
int k;
register int i,j;
double c,d;
c=d=1;
k=(m>(n-m))?m:(n-m);
for(j=1,i=k+1;(i<=n);i++,j++)
{
c*=i;
d*=j;
if( !fmod(c,d) && (d!=1) )
{ c/=d;
d=1;
}
}
return c;
}
/* A sample main function */
int main(void)
{
int n,m;
while(scanf("%d%d",&n,&m)&&n&&m)
printf("%d things taken %d at a time is %.0f exactly.\n",n,m,nCr(n,m));
return 0;
}

#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXN 102
#define RADIO 6378.0
#define INF 2147483647

double PIx=3.141592653589793;


long myRound(double x)
{
  return (long)(x+0.5f);
}

double radianes(double x)
{
  return x * PIx / 180;
}




long cost(double la1,double lo1,double la2,double lo2){

  double lon2 =radianes(lo2);
  double lon1 =radianes(lo1);
  double lat2 =radianes(la2);
  double lat1 =radianes(la1);

  double dlon = lon2 - lon1;
  double dlat = lat2 - lat1;
  double a = (sin(dlat/2)*sin(dlat/2)) + cos(lat1) * cos(lat2) * (sin(dlon/2)*sin(dlon/2));
  double angulo = 2 * atan2(sqrt(a), sqrt(1-a));


  return (myRound(angulo*RADIO));

}




int main(){

int i,j,k,n;
long A;

double lat[101],lon[101];
char s[102][31],a[31],b[31];

i=1;

while(1){
 scanf("%s",&s[i]);
 if(strcmp("#",s[i])==0)break;
scanf("%lf %lf",&lat[i],&lon[i]);
 i++;

}

n=i-1;


while(1){
scanf("%s %s",a,b);

if((strcmp("#",a)==0) && (strcmp("#",b)==0))break;
j=0;k=0;
  for(i=1;i<=n;i++)
     if(strcmp(a,s[i])==0)
        {j=i;break;}

  for(i=1;i<=n;i++)
     if(strcmp(b,s[i])==0)
        {k=i;break;}

printf("%s - %s\n",a,b);

if(j!=0 && k!=0){
A=cost(lat[k],lon[k],lat[j],lon[j]);
printf("%ld km\n",A);
}
else
printf("Unknown\n");


}


return 0;
}

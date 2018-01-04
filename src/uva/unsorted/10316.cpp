#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXN 102
#define RADIO 6378.0
#define INF 2147483647

double PIx=3.141592653589793;
int n;
double A[1005][1005];

struct nn {
  double lat,lon;
 } node[1005];

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


void Ini() {
	for(int i = 1; i<=n; i++)
		for(int j = i; j <=n; j++)
                A[i][j]=A[j][i]=INF;
}


int main(){


int i,j,k;


while(scanf("%d",&n)!=EOF){

  Ini();

  for(i=1;i<=n;++i)
     scanf("%lf %lf",&node[i].lat,&node[i].lon);

  for(i=1;i<n;++i)
    for(j=i+1;j<=n;++j)
       A[i][j]=A[j][i]=cost(node[i].lat, node[i].lon,node[j].lat,node[j].lon);

k=-1;
double min=INF;

  for(i=1;i<=n;++i){
      double max=0;
       for(j=1;j<=n;++j){
         if(i!=j && A[i][j]>max)
           max=A[i][j];
          }

      if(min>=max){
          k=i;
          min=max;
          }

     }


 printf("%.2lf %.2lf\n",node[k].lat,node[k].lon);


}

return 0;
}

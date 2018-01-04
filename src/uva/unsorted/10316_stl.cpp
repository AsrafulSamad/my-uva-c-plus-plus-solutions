#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<iostream>
#define MAXN 102
#define RADIO 6378.0
#define INF 2147483647

using namespace std;
double PIx=3.141592653589793;
int n;

vector< pair<double,double> >node(1005);

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
int i,j,k;
double b;
vector < double > A(1005);

while(scanf("%d",&n)!=EOF){

  for(i=1;i<=n;++i)
     scanf("%lf %lf",&node[i].first,&node[i].second);

  for(i=1;i<=n;++i){
   double max=0;
    for(j=1;j<=n;++j){
       if(i==j) continue;
       b=cost(node[i].first, node[i].second,node[j].first,node[j].second);
       if(max<b){
           max=b;
           }
       }
      A[i]=max;
     }

k=-1;
double min=INF;

  for(i=1;i<=n;++i){
       if(min>=A[i]){
           min=A[i];
           k=i;
           }
     }


 printf("%.2lf %.2lf\n",node[k].first,node[k].second);


}

return 0;
}

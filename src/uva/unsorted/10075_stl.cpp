#include<stdio.h>
#include<string.h>
#include<math.h>
#include<map>
#include<iostream>
#include<vector>

#define MAXN 102
#define RADIO 6378.0
#define INF 2147483647


#define myRound(x) ( x+0.5f )
#define radianes(x) ( x * PIx / 180 )
#define ra(x) radianes(x)

#define cost(la1,lo1,la2,lo2)  (myRound( ( 2 * atan2(sqrt( (sin( (ra(la2) - ra(la1) ) /2)*sin((ra(la2) - ra(la1))/2)) + cos(ra(la1)) * cos(ra(la2)) * (sin((ra(lo2) - ra(lo1))/2)*sin((ra(lo2) - ra(lo1))/2)) ), sqrt(1- ((sin((ra(la2) - ra(la1))/2)*sin((ra(la2) - ra(la1))/2)) + cos(ra(la1)) * cos(ra(la2)) * (sin((ra(lo2) - ra(lo1))/2)*sin((ra(lo2) - ra(lo1))/2)) ) ) ) )*RADIO ) )

using namespace std;

double PIx=3.141592653589793;
double lon2,lon1,lat2,lat1,dlon,dlat,a1,angulo;


vector< vector < long > > A(102,vector<long>(102));

map < string,int > ma;

int n;

inline void Ini() {
	int i,j;
	for(i = 1; i<=n; i++){
		for(j = i+1; j <=n; j++)
             A[i][j]=A[j][i]=INF;
         A[i][i]=0;
      }
}

inline void floyd() {
	int i, j, k;
	for(k = 1; k <= n; k ++) {
      for(i = 1; i <= n; i++) {
        for(j = 1; j<=n; j ++) {
	         if ((A[i][k] * A[k][j] != 0) && (i != j)&& A[i][k]!=INF && A[k][j]!=INF)
                    if ((A[i][k] + A[k][j] < A[i][j]) ||(A[i][j] ==0))
                        A[i][j]= A[i][k] + A[k][j];

		}
	}
 }
}


int main(){


int i,j,k,m,q,l,p=1;


double lat[101],lon[101];
char a[21],b[21];

while(scanf("%d %d %d",&n,&m,&q)&&n&&m&&q){

Ini();

for(i=1;i<=n;i++){
    scanf("%s %lf %lf",a,&lat[i],&lon[i]);
     ma.insert(make_pair(a,i));
  }


for(i=1;i<=m;i++)
    {
    scanf("%s %s",a,b);

   k=ma[a];
   l=ma[b];

  A[k][l]=cost(lat[k],lon[k],lat[l],lon[l]);

    }


if(p>1)
 printf("\n");

printf("Case #%d\n",p++);


floyd();


for(i=1;i<=q;i++)
{
    scanf("%s %s",a,b);

   k=ma[a];
   l=ma[b];

if(A[k][l]==INF)
  printf("no route exists\n");
else
  printf("%ld km\n",A[k][l]);
}

ma.clear();

}

return 0;
}

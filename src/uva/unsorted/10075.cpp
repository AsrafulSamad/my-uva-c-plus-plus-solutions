#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXN 102
#define RADIO 6378.0
#define INF 2147483647

double PIx=3.141592653589793;

long A[MAXN][MAXN];

int n;


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
		for(int j = 1; j <=n; j++){
            if(i==j)
                A[i][j]=0;
            else
                A[i][j]=INF;
		}
}

void floyd() {
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
char s[102][21],a[21],b[21];

while(scanf("%d %d %d",&n,&m,&q)&&n&&m&&q){

Ini();

for(i=1;i<=n;i++)
    scanf("%s %lf %lf",&s[i],&lat[i],&lon[i]);



for(i=1;i<=m;i++)
    {
    scanf("%s %s",a,b);


 for(j=1;j<=n;j++)
     if(strcmp(a,s[j])==0)
                 {k=j;break;}

 for(j=1;j<=n;j++)
     if(strcmp(b,s[j])==0)
                   {l=j;break;}


A[k][l]=cost(lat[k],lon[k],lat[l],lon[l]);

    }


if(p>1)
 printf("\n");

printf("Case #%d\n",p++);


floyd();


for(i=1;i<=q;i++)
{
    scanf("%s %s",a,b);

  for(j=1;j<=n;j++)
     if(strcmp(a,s[j])==0)
        {k=j;break;}

  for(j=1;j<=n;j++)
     if(strcmp(b,s[j])==0)
                 {l=j;break;}




if(A[k][l]==INF)
  printf("no route exists\n");
else
  printf("%ld km\n",A[k][l]);
}

}

return 0;
}

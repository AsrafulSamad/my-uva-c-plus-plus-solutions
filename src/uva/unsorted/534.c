#include<stdio.h>
#include<math.h>
#define INF 9999999.000
#define max(A,B) (A>B?A:B)
#define min(A,B) (A<B?A:B)

int main(){

    double a[202][202];
    int n,m,i,j,k,l,f,c=1;

    struct node{
        int x,y;

        }no[202];


    while(scanf("%d",&n)&&n){



      i=1;
      for(j=1;j<=n;++j)
        scanf("%d%d",&no[j].x,&no[j].y);


	for(i=1;i<=n;i++)
	 for(j=i+1;j<=n;j++)
	 {
	    l=no[i].x-no[j].x;
	    f=no[i].y-no[j].y;
        a[i][j]=a[j][i]= (double) sqrt(pow(l,2) + pow(f,2));

		if(a[i][j]==0.0)
		  a[i][j]=INF;
	 }





for(k=1;k<=n;++k)
 for(i=1;i<=n;++i)
  for(j=1;j<=n;++j)
  {
      if(i!=j && i!=k && j!=k)
        a[i][j]=min(a[i][j],max(a[i][k],a[k][j]));

      }


printf("Scenario #%d\n",c++);
printf("Frog Distance = %.3lf\n\n",a[1][2]);





      }


    return 0;
    }

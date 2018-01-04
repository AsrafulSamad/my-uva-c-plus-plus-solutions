#include<stdio.h>
#define N 102
#define INF 21474836
#define MAX(a, b)  (a>b?a:b)
#define MIN(a, b)  (a>b?b:a)

int  main()
{

int count=1;

int mat[N][N],n, e, p,k,i,j,c,r,q;

while(scanf("%d%d%d",&n,&e,&p)==3){
  if(!n && !e && !p) break;

for(i=1; i<=n; i++){
 for(j=1; j<=n; j++)
  mat[i][j] = INF;
mat[i][i]=0;
}

for(k=1; k<=e; k++)
{
scanf("%d%d%d",&i,&j,&c);
 mat[i][j] = mat[j][i] = c;

}


if(count>1)
 printf("\n");
printf("Case #%d\n",count++);


for(k=1; k<=n; k++){
  for(i=1; i<=n; i++){
   for(j=1; j<=n; j++){
      mat[i][j] = MIN(mat[i][j],MAX(mat[i][k],mat[k][j]));
    }
  }
}



for(i=1;i<=p;i++){
 scanf("%d%d",&r,&q);
if(mat[r][q]==INF)
  printf("no path\n");
else
  printf("%d\n",mat[r][q]);
}


}
return 0;
}


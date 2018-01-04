#include<stdio.h>

int main(){
int a[11][11],i,j,k,n,p,sum,kase=1;
while(scanf("%d",&n)&&n){

for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);

if(n%2==0)
 p=n/2;
else
 p=n/2+1;

printf("Case %d:",kase++);

for(k=1;k<=p;k++){
    sum=0;
  for(i=k;i<=n-k+1;i++){

      if(i==k||i==n-k+1){
         for(j=k;j<=n-k+1;j++)
           sum=sum+a[i][j];
          }
      else if(n%2==1 && k==p)
        sum+=a[i][k];
      else
        sum=sum+a[i][k]+a[i][n-k+1];

      }

    printf(" %d",sum);

}





printf("\n");
    }








    return 0;
    }

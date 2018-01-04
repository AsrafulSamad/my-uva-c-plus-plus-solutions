#include<stdio.h>

int main(){
int i,j,k,n,m,t,c,a[51];
scanf("%d",&n);
for(i=1;i<=n;i++){
   scanf("%d",&m);
for(j=0;j<m;j++)
    scanf("%d",&a[j]);
c=0;
for(k=0;k<m-1;k++){
   for(j=k+1;j<m;j++){
       if(a[k]>a[j]){
          t=a[k];
          a[k]=a[j];
          a[j]=t;
          c++;
      }
    }
}
printf("Optimal train swapping takes %d swaps.\n",c);
    }
return 0;
    }

#include<cstdio>
#include<algo.h>
int main(){
    int n,i,a[2000001];
    while(scanf("%d",&n)&&n){
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      sort(a,a+n);
      printf("%d",a[0]);
    for(i=1;i<n;i++)
     printf(" %d",a[i]);
printf("\n");
    }
return 0;
    }

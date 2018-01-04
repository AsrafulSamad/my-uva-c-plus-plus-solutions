#include<stdio.h>
int main(){
    int n,i,j,h,l,a[50],m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        for(j=1;j<=m;j++)
          scanf("%d",&a[j]);
        h=0;l=0;

        for(j=1;j<m;j++){
            if(a[j]<a[j+1])
              h=h+1;
            if(a[j]>a[j+1])
              l=l+1;

            }

printf("Case %d: %d %d\n",i,h,l);

}

return 0;
    }

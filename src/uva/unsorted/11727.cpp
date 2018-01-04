#include<stdio.h>
int main(){
    int a[3],b,i,j,k,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++)
        scanf("%d",&a[j]);

        for(j=0;j<2;j++)
          for(k=j+1;k<3;k++)
            if(a[j]>a[k]){
                b=a[j];
                a[j]=a[k];
                a[k]=b;
                }

    printf("Case %d: %d\n",i,a[1]);

}
    return 0;
    }

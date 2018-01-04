#include<stdio.h>

int main(){
    long a[20][3],s;
    int i,j,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        s=0;
        for(j=0;j<m;j++){
            scanf("%ld %ld %ld",&a[j][0],&a[j][1],&a[j][2]);
             s+=a[j][0]*a[j][2];
          }
         printf("%ld\n",s);

         }

    return 0;
    }

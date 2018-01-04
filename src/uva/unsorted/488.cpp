#include<stdio.h>

int main(){
    int t,n,m,i,j,l,k,p;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&m);

        if(n==0||m==0){
         printf("\n");
       continue;
        }

    for(j=1;j<=m;j++){
        p=n;
        for(k=1;k<=n*2-1;k++){
        if(k<=n)
         for(l=1;l<=k;l++)
            printf("%d",k);

        else{
          for(l=p-1;l>0;l--)
            printf("%d",p-1);
        p--;
        }


        printf("\n");
        }
 if(i==t&&j==m)
 ;
 else
    printf("\n");
    }
}
return 0;
    }

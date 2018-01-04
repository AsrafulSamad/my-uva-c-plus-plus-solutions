#include<stdio.h>

int main(){

    int i,j,k,a,t,f;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&a,&f);

        for(i=1;i<=f;i++){
            if(i>1)printf("\n");
                    for(j=1;j<=a;j++){
                        for(k=1;k<=j;k++)
                        printf("%d",j);
                        printf("\n");
                    }
                    for(j=j-2;j>0;j--){
                        for(k=1;k<=j;k++)
                        printf("%d",j);
                        printf("\n");
                    }
        }

       if(t)printf("\n");

    }



 return 0;
}

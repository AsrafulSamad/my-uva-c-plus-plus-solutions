#include<stdio.h>

int main(){

    int i,j,a,t,f;
    unsigned long A[9]={1,22,333,4444,55555,666666,7777777,88888888,999999999};



    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&a,&f);

        for(i=1;i<=f;i++){
            if(i>1)printf("\n");
            for(j=1;j<=a+a-1;j++){
            printf("%lu\n",A[j-(j%a)*(j/a)*2-1]);
            }

        }
         if(t)printf("\n");

    }



 return 0;
}

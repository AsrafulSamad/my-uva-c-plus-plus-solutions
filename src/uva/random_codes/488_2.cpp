#include<stdio.h>

int main(){

    int i,j,a,t,f;
    unsigned long A[9]={1,22,333,4444,55555,666666,7777777,88888888,999999999};
    unsigned long B[9][17]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            1,2,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,
                            1,2,3,4,3,2,1,0,0,0,0,0,0,0,0,0,0,
                            1,2,3,4,5,4,3,2,1,0,0,0,0,0,0,0,0,
                            1,2,3,4,5,6,5,4,3,2,1,0,0,0,0,0,0,
                            1,2,3,4,5,6,7,6,5,4,3,2,1,0,0,0,0,
                            1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,0,0,
                            1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1};


    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&a,&f);

        for(i=1;i<=f;i++){
            if(i>1)printf("\n");
            for(j=1;j<=a+a-1;j++){
            printf("%lu\n",A[B[a-1][j-1]-1]);
            }

        }
         if(t)printf("\n");

    }



 return 0;
}

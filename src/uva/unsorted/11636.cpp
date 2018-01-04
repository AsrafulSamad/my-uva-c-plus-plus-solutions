#include<stdio.h>

int main(){

   int i,j,n,k=1;
   while(scanf("%d",&n)){
     if(n<0) break;
    printf("Case %d:",k++);
    if(n==0||n==1){
         printf(" 0\n");
     continue;
    }

    j=1;
    for(i=1;;i++){
        j=j+j;
        if(j>=n)
         break;
        }

    printf(" %d\n",i);



   }


    return 0;
    }

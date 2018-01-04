#include<stdio.h>
int main(){

    long n,m,c,i=1,j,a[1001],sum;
    float avg,f;
    char s='%';
    a[0]=0;


    while(scanf("%ld",&n)){
        for(i=1;i<=n;i++){

        sum=0;
        c=0;
        scanf("%ld",&m);
         for(j=1;j<=m;j++){
             scanf("%ld",&a[j]);
             sum=sum+a[j];
         }

     avg=sum/m;
     for(j=1;j<=m;j++)
        if(a[j]>avg)
           c++;
   f=(c*100.0)/m;
   printf("%.3f%c\n",f,s);


        }
        break;
}
    return 0;
    }

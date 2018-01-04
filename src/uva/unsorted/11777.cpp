#include<stdio.h>
int main(){
    int n,i,j,a[10],sum,m,k;
    scanf("%d",&n);
   for(i=1;i<=n;i++){


       for(j=0;j<7;j++)
         scanf("%d",&a[j]);

          for(j=4;j<6;j++)
           for(k=j+1;k<7;k++)
               if(a[j]<a[k]){
                   m=a[j];
                   a[j]=a[k];
                   a[k]=m;
                   }
     sum=0;
     for(j=0;j<4;j++)
       sum=sum+a[j];
     sum=sum+(a[4]+a[5])/2;

     printf("Case %d: ",i);
       if(sum>=90)
        printf("A\n");
       else if(sum>=80&&sum<90)
        printf("B\n");

       else if(sum>=70&&sum<80)
        printf("C\n");

       else if(sum>=60&&sum<70)
        printf("D\n");
       else if(sum<60)
        printf("F\n");





           }

return 0;
    }

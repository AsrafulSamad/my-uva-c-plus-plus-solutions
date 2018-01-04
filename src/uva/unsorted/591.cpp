#include<stdio.h>

int main(){
int b[101];
int a,i,sum,avg,count,j=0;
b[0]=0;

while(1){
   scanf("%d",&a);
   if(a==0) break;
   j=j+1;
   sum=0,count=0;
   for(i=1;i<=a;i++) {
       scanf("%d",&b[i]);
       sum+=b[i];
}
  avg=sum/a;

for(i=1;i<=a;i++)
   if(b[i]>avg){
     count=count+(b[i]-avg);
   }
printf("Set #%d\n",j);
printf("The minimum number of moves is %d.\n\n",count);
}

    return 0;
    }
